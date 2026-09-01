/* FUN_1011aa34 @ 0x1011aa34 */

void FUN_1011aa34(int param_1,int param_2,uint param_3)

{
  param_1 = param_1 * 4;
  *(uint *)(param_1 + 0x40090010) = *(uint *)(param_1 + 0x40090010) & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x40090010) = *(undefined4 *)(param_1 + 0x40090010);
  *(uint *)(param_1 + 0x40090010) = *(uint *)(param_1 + 0x40090010) & 0xffffe0ff;
  *(uint *)(param_1 + 0x40090010) = *(uint *)(param_1 + 0x40090010) | param_2 << 8;
  *(uint *)(param_1 + 0x40090010) = *(uint *)(param_1 + 0x40090010) & 0xffffffc0;
  *(uint *)(param_1 + 0x40090010) = param_3 | *(uint *)(param_1 + 0x40090010);
  *(uint *)(param_1 + 0x40090010) = *(uint *)(param_1 + 0x40090010) & 0x7fffffff;
  *(uint *)(param_1 + 0x40090010) = *(uint *)(param_1 + 0x40090010) | 0x80000000;
  return;
}

