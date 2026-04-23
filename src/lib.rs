use serde::{Serialize, Deserialize};

#[derive(Serialize, Deserialize, Debug)]
pub struct WorldState {
    pub tick: u64,
    pub active_players: u32,
    pub status: String,
}

impl WorldState {
    pub fn new() -> Self {
        Self {
            tick: 0,
            active_players: 0,
            status: String::from("Stationary"),
        }
    }
}