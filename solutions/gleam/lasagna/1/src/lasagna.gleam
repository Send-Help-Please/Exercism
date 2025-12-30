// Please define the expected_minutes_in_oven function

// Please define the remaining_minutes_in_oven function

// Please define the preparation_time_in_minutes function

// Please define the total_time_in_minutes function

// Please define the alarm function


import gleam/io
import gleam/int

pub fn main() {
  let expected_minutes = expected_minutes_in_oven()
  io.println(int.to_string(expected_minutes))

  let remaining_minutes = remaining_minutes_in_oven(10)
  io.println(int.to_string(remaining_minutes))

  let preparation_time = preparation_time_in_minutes(2)
  io.println(int.to_string(preparation_time))

  let total_time = total_time_in_minutes(2, 10)
  io.println(int.to_string(total_time))

  let alarm_time = alarm()
  io.println(alarm_time)
}

pub fn expected_minutes_in_oven() -> Int {
  40
}

pub fn remaining_minutes_in_oven(minutes_in_oven: Int) -> Int {
  expected_minutes_in_oven() - minutes_in_oven
}

pub fn preparation_time_in_minutes(layers: Int) -> Int {
  layers * 2
}

pub fn total_time_in_minutes(layers: Int, minutes_in_oven: Int ) -> Int {
  preparation_time_in_minutes(layers) + minutes_in_oven
}

pub fn alarm() -> String {
  "Ding!"
}