"""Tests for the formatter module."""

import unittest
from src.formatter import format_csv, format_json


class TestFormatter(unittest.TestCase):
    def setUp(self):
        self.records = [
            {"name": "Alice", "email": "alice@example.com"},
            {"name": "Bob", "email": "bob@example.com"},
        ]

    def test_format_csv_header(self):
        output = format_csv(self.records)
        self.assertTrue(output.startswith("name,email"))

    def test_format_json_structure(self):
        output = format_json(self.records)
        self.assertIn("Alice", output)
        self.assertIn("alice@example.com", output)

    def test_format_csv_empty(self):
        self.assertEqual(format_csv([]), "")


if __name__ == "__main__":
    unittest.main()