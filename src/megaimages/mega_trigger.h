#ifndef GRIT_MEGA_TRIGGER_H
#define GRIT_MEGA_TRIGGER_H

#define mega_triggerTilesLen 224

const u8 z_mega_trigger[] __attribute__((aligned(2))) = {
		0x10, 0x00, 0x04, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x02, 0x30, 0x05, 0x90, 0x0B, 0xE0, 0x17, 0xE0, 0x28,
		0xEC, 0xE0, 0x39, 0xE0, 0x4A, 0x00, 0x5B, 0x50, 0xE0, 0x5F, 0x30, 0x70, 0x35, 0x00, 0x0F, 0x50, 0x33, 0x33,
		0x33, 0x00, 0x02, 0xE0, 0x7F, 0xE0, 0x90, 0xA0, 0x4B, 0x6C, 0x35, 0x00, 0x52, 0x00, 0x33, 0x35, 0x00, 0x37,
		0x00, 0x3B, 0x50, 0x33, 0x60, 0x93, 0x10, 0x0B, 0x30, 0x4A, 0x99, 0x99, 0x33, 0x99, 0x77, 0x00, 0x77, 0x93,
		0x88, 0x88, 0x66, 0x89, 0x88, 0x66, 0x00, 0x68, 0xA9, 0x6A, 0x6A, 0x66, 0x44, 0x66, 0x46, 0x68, 0x64, 0x30,
		0x65, 0x30, 0x6B, 0x99, 0x00, 0x72, 0x86, 0x39, 0x33, 0x00, 0x33, 0x88, 0x98, 0x33, 0x33, 0xAA, 0x9A, 0x33,
		0x0F, 0x33, 0x46, 0x44, 0x39, 0xE0, 0x7F, 0xE1, 0x0F, 0x10, 0x63, 0x10, 0x67, 0xF8, 0x20, 0x6B, 0x10, 0xAF,
		0x10, 0x7B, 0x10, 0x83, 0x10, 0x8B, 0x00, 0x50, 0x44, 0x00, 0x66, 0x66, 0x46, 0x22, 0x62, 0x22, 0x66, 0x11,
		0x00, 0x61, 0x66, 0x61, 0x19, 0x11, 0x66, 0x16, 0xB9, 0x01, 0xBB, 0xB6, 0x66, 0x93, 0x6B, 0x66, 0xB6, 0x10,
		0x8B, 0xC8, 0x10, 0x93, 0x10, 0x63, 0x66, 0x22, 0x00, 0x03, 0x11, 0x39, 0x33, 0x03, 0x16, 0x91, 0x33, 0x33,
		0xBB, 0x9B, 0x00, 0x03, 0x00, 0x83, 0xFF, 0x10, 0x8B, 0xE0, 0xFF, 0xE1, 0x8C, 0xE1, 0x9D, 0xE1, 0xAE, 0x11,
		0x46, 0x31, 0x0F, 0xE1, 0x6B, 0xFF, 0x21, 0xDA, 0x90, 0xFF, 0x11, 0x73, 0x40, 0xB7, 0xE1, 0xF6, 0xE2, 0x07,
		0xE2, 0x18, 0xE2, 0x29, 0xF7, 0xE2, 0x3A, 0xE2, 0x4B, 0xE0, 0x6B, 0x62, 0x16, 0x35, 0x01, 0xC2, 0xE1, 0xFF,
		0xE2, 0x8B, 0xE8, 0xE0, 0x4B, 0x41, 0xFB, 0x11, 0xF7, 0x30, 0x01, 0xFB, 0x35, 0x33, 0x79, 0xC0, 0x12, 0x47,
		0x20, 0x4A, 0x93, 0x99, 0x39, 0x93, 0x79, 0x69, 0x00, 0x94, 0x79, 0x67, 0xBB, 0x46, 0x77, 0xB6, 0xBB, 0x01,
		0x6B, 0x67, 0xBB, 0x99, 0xBB, 0x96, 0x99, 0x02, 0x13, 0xCC, 0x82, 0x00, 0x01, 0xFA, 0x33, 0x94, 0x02, 0x76,
		0x01, 0xF6, 0x33, 0x46, 0xBF, 0x02, 0x07, 0x69, 0x00, 0x0C, 0xE2, 0xFF, 0xE2, 0xA9, 0x00, 0x63, 0x10, 0x67,
		0x10, 0x6B, 0xE0, 0x10, 0x73, 0x42, 0x73, 0x52, 0x03, 0x77, 0x66, 0x66, 0x66, 0x97, 0x80, 0x00, 0x6F, 0x99,
		0x99, 0xB6, 0x96, 0x97, 0x69, 0x6B, 0x50, 0x99, 0x10, 0x7B, 0x79, 0x00, 0x13, 0x93, 0x79, 0x47, 0x94, 0xAB,
		0x10, 0x93, 0x44, 0x00, 0x70, 0x49, 0x00, 0x74, 0x99, 0x10, 0x07, 0x02, 0x7B, 0xFF, 0x10, 0x7B, 0x10, 0x83,
		0x10, 0x8B, 0xE2, 0xFF, 0xE3, 0x8C, 0xE3, 0x9D, 0xE3, 0xAE, 0x11, 0x46, 0xFC, 0xE1, 0xD7, 0xE1, 0xFF, 0x43,
		0x6B, 0x01, 0x73, 0x21, 0x7B, 0xE3, 0xF4, 0x00, 0x00};

#define mega_triggerPalLen 32

const u32 mega_triggerPal[16] = {
		0x7FFF, 0x3757, 0x7B97, 0x31AA, 0x72F1, 0x424F, 0x2147, 0x429E, 0x4953, 0x00E4, 0x6ADB, 0x37BD, 0x0000, 0x0000,
		0x0000, 0x0000};

#endif // GRIT_MEGA_TRIGGER_H
