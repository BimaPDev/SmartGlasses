/* FUN_1012c2a2 @ 0x1012c2a2 */

void FUN_1012c2a2(int param_1,uint param_2)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if ((*(byte *)(param_1 + 100) & 1) != param_2) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0xfe | param_2 != 0;
    local_1c = *(int *)(*(int *)(param_1 + 0x2c) + 0x18);
    local_20 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
    local_24 = *(int *)(param_1 + 0x54) + local_1c;
    local_28 = *(int *)(param_1 + 0x50) + local_20;
    local_20 = local_20 + *(int *)(param_1 + 0x58);
    local_1c = local_1c + *(int *)(param_1 + 0x5c);
    FUN_10125ab8(param_1,&local_28);
  }
  return;
}

