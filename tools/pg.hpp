#pragma once

const uint8_t PG_BINARY_HEADER[] = {
	0x50, 0x47, 0x43, 0x4f, 0x50, 0x59, 0x0a, 0xff, 0x0d, 0x0a, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const uint8_t PG_BINARY_TAIL[] = {
	0xff, 0xff
};
