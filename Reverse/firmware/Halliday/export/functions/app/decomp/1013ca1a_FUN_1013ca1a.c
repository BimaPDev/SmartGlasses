/* FUN_1013ca1a @ 0x1013ca1a */

undefined4 FUN_1013ca1a(int param_1,uint param_2,uint param_3)

{
  if ((param_3 != 0) && (param_2 <= param_3)) {
    *(uint *)(param_1 + 8) = param_2;
    *(uint *)(param_1 + 0xc) = param_3;
    *(int *)param_1 = param_1;
    *(int *)(param_1 + 4) = param_1;
    *(int *)(param_1 + 0x10) = param_1 + 0x10;
    *(int *)(param_1 + 0x14) = param_1 + 0x10;
    return 0;
  }
  return 0xffffffea;
}

