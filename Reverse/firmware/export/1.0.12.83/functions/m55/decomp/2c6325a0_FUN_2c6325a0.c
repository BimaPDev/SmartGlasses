/* FUN_2c6325a0 @ 0x2c6325a0 */

void FUN_2c6325a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  
  uVar1 = DAT_2c6325f8;
  uVar2 = DAT_2c6325f4;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x38) = uVar1;
  bVar4 = *(byte *)(param_2 + 0x3c) & 0xc0 | 0x38;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(byte *)(param_2 + 0x3c) = bVar4;
  lv_obj_add_flag_invalidate(param_2,0x400,0,bVar4,param_4);
  FUN_2c632538(param_2,DAT_2c6325fc);
  uVar2 = FUN_2c604178(param_2);
  iVar3 = FUN_2c5fefc8(DAT_2c632600,uVar2);
  FUN_2c5ff0b8();
  *(int *)(param_2 + 0x24) = iVar3;
  *(int *)(iVar3 + 0x24) = param_2;
  return;
}

