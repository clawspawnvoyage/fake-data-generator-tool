"""Tests for the generator module."""

import unittest
from src.generator import generate_record, generate_records


class TestGenerator(unittest.TestCase):
    def test_generate_record_returns_dict(self):
        record = generate_record()
        self.assertIsInstance(record, dict)
        self.assertIn("name", record)
        self.assertIn("email", record)

    def test_generate_records_count(self):
        records = generate_records(3)
        self.assertEqual(len(records), 3)

    def test_generate_records_default(self):
        records = generate_records()
        self.assertEqual(len(records), 5)


if __name__ == "__main__":
    unittest.main()