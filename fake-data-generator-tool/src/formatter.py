"""Output formatting module."""

import csv
import json
from typing import List, Dict


def format_csv(records: List[Dict[str, str]]) -> str:
    """Convert records to CSV string."""
    if not records:
        return ""
    output = []
    header = list(records[0].keys())
    output.append(",".join(header))
    for record in records:
        row = ",".join(record.values())
        output.append(row)
    return "\n".join(output)


def format_json(records: List[Dict[str, str]]) -> str:
    """Convert records to JSON string."""
    return json.dumps(records, indent=2)