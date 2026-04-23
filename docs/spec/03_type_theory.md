# Astranova Type Theory & Dimensional Analysis

## 1. Unit Algebra
Every scalar can carry a unit, e.g., `Scalar[m/s^2]`.  
Units are represented internally as a map from base unit symbols to integer exponents:

Multiplication adds exponents; division subtracts; power multiplies.

**Unification rule:** Two unit maps `U1` and `U2` unify if and only if for every key present in both, the exponents are equal. Extraneous keys are allowed (because `Scalar` without a unit is dimensionless).

**Example:**
- `[m] * [s^-1]` unifies with `[m/s]` → True.
- `[m]` unifies with `[s]` → False.

## 2. Type Inference
The compiler walks the AST bottom-up, assigning types:
- Numbers default to `Scalar(None)` (dimensionless).
- Variables are looked up in the environment.
- For `+` and `-`, the types must unify exactly (including units).
- For `*` and `/`, the resulting unit map is the element‑wise sum/difference of exponents.
- Functions have arrow types.

## 3. Linear Types (`State`)
A type marked `State(T)` (or `Linear<T>`) is a resource that must be used **exactly once**.
- It cannot be duplicated: no copy trait.
- It cannot be silently dropped: every code path must consume it or pass it on.
- The compiler tracks linear paths using an affine type system.

## 4. Sovereign Type
`Sovereign` is a singleton type with no public constructor.  
It is inhabited only by the constant `𝕌` from the kernel seed.  
Any attempt to create a value of type `Sovereign` in user code is a compile‑time error.