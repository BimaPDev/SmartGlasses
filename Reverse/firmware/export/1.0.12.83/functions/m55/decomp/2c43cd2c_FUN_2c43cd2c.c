/* FUN_2c43cd2c @ 0x2c43cd2c */

void FUN_2c43cd2c(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint unaff_r4;
  int *piVar4;
  int iVar5;
  int unaff_r6;
  int *unaff_r7;
  
  piVar4 = (int *)(unaff_r4 >> 7);
  *piVar4 = param_3;
  piVar4[1] = param_4;
  piVar4[2] = (int)piVar4;
  piVar4[3] = unaff_r6;
  piVar4[4] = (int)unaff_r7;
  *(char *)(param_3 * 2) = (char)param_2;
  iVar5 = *(int *)(param_4 + 0x70);
  *param_1 = iVar5;
  puVar1 = (undefined4 *)*unaff_r7;
  *puVar1 = param_2;
  puVar1[1] = unaff_r7 + 4;
  func_0x2bef92b6(&stack0x00000394,param_2,param_3,iVar5 >> 0x1a);
  FUN_2c47282c();
  FUN_2c472a14();
  uVar2 = FUN_2c4728e8(0,9);
  FUN_2c472a14();
  uVar3 = FUN_2c4728e8(0,0x40);
  FUN_2c472a14();
  func_0x2c4729a8(0,uVar3);
  FUN_2c472a14();
  func_0x2c4729a8(0,uVar2);
  puVar1 = DAT_2c472a5c;
  piVar4 = DAT_2c472a58;
  if (*DAT_2c472a58 != 0) {
    FUN_2c644044(*DAT_2c472a5c,0xffffffff);
    FUN_2c4721a8(*piVar4,DAT_2c472a60);
    FUN_2c644080(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x232,DAT_2c472a70,DAT_2c472a6c);
}

