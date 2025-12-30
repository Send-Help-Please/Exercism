pub fn reply(number: Int) -> String {
  case number {
    42 -> "Correct"
    41 | 43 -> "So close"
    i if i < 41 -> "Too low"
    i if i > 43 -> "Too high"
    _ -> ""
  }
}