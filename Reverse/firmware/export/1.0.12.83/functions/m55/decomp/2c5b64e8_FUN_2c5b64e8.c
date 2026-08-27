/* FUN_2c5b64e8 @ 0x2c5b64e8 */

void FUN_2c5b64e8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *local_4c;
  undefined4 uStack_48;
  undefined1 local_44 [16];
  undefined1 *local_34;
  undefined4 uStack_30;
  undefined1 local_2c [16];
  uint local_1c;
  
  local_1c = *DAT_2c5b64cc;
  if (*(int *)(param_1 + 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b64e4,0xfb,DAT_2c5b64e0,DAT_2c5b64dc);
  }
  FUN_2c606abc(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc),1);
  uVar3 = *(int *)(param_2 + 4) - 2;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  uVar1 = DAT_2c5b64d8;
  if (uVar3 < 0x13) {
    uVar1 = *(undefined4 *)(DAT_2c5b64d0 + uVar3 * 4);
  }
  uVar1 = FUN_2c5e2e8c(uVar1);
  FUN_2c63140c(uVar4,uVar1);
  uVar1 = FUN_2c63736c(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
  iVar2 = FUN_2c66b624(uVar1,param_2 + 0x14);
  if (iVar2 != 0) {
    FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 4) + 0xc),param_2 + 0x14);
  }
  local_44[0] = 0;
  local_2c[0] = 0;
  uStack_48 = 0;
  uStack_30 = 0;
  local_4c = local_44;
  local_34 = local_2c;
  FUN_2c5b4728(*(undefined4 *)(param_2 + 0x94),&local_4c,&local_34,DAT_2c5b64d4);
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),local_4c);
  FUN_2c638730(*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),local_34);
  FUN_2c608c7c(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  if (local_34 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_4c != local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((*DAT_2c5b64cc ^ local_1c) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(0,local_4c,*DAT_2c5b64cc ^ local_1c,0);
  }
  return;
}

