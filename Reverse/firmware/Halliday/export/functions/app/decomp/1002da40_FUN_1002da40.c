/* FUN_1002da40 @ 0x1002da40 */

void FUN_1002da40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined2 local_28;
  short local_26;
  undefined2 local_24;
  byte local_20;
  byte local_1f;
  byte local_1e;
  char local_1d;
  char local_1c;
  short local_1a;
  int local_14;
  
  uVar2 = 0;
  local_14 = *DAT_1002db04;
  local_34 = 0;
  uStack_30 = 0;
  FUN_100434c0(&local_34,param_2,param_3,0);
  FUN_100433f8(&local_20);
  local_2c = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_24 = *(undefined2 *)(param_1 + 0xc);
  local_26 = (short)((uint)uVar1 >> 0x10);
  _local_28 = CONCAT22(local_26 + -0x76c,(short)uVar1);
  _local_28 = CONCAT31(stack0xffffffd9,(char)uVar1 + -1);
  FUN_101221f0(&local_2c,&uStack_30);
  uVar1 = uVar2;
  if ((*(byte *)(param_1 + 6) < 0x18) && (*(byte *)(param_1 + 5) < 0x3c)) {
    if ((*(char *)(param_1 + 1) == '\0') &&
       (((*(short *)(param_1 + 10) == local_1a && (*(char *)(param_1 + 8) == local_1c)) &&
        (*(char *)(param_1 + 7) == local_1d)))) {
      uVar2 = 0xe10;
      if ((int)(((uint)*(byte *)(param_1 + 6) * 0xe10 + (uint)*(byte *)(param_1 + 5) * 0x3c) -
               ((uint)local_1e * 0xe10 + (uint)local_1f * 0x3c + (uint)local_20)) < -0x1e) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  while (*DAT_1002db04 != local_14) {
    FUN_1013cdc0(uVar1);
    uVar1 = uVar2;
  }
  return;
}

