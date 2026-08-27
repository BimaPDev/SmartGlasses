/* FUN_2c5533c8 @ 0x2c5533c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_2c5533c8(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uStack_68;
  uint *puStack_64;
  uint uStack_60;
  uint auStack_5c [4];
  uint *puStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint *puStack_34;
  int iStack_30;
  uint auStack_2c [4];
  int iStack_1c;
  
  iStack_1c = *DAT_2c55354c;
  puVar5 = *(undefined1 **)(param_2 + 100);
  uVar3 = *(uint *)(param_2 + 0x68);
  puStack_64 = auStack_5c;
  if ((puVar5 + uVar3 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c553550,param_2,param_3,0);
  }
  uStack_68 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      auStack_5c[0] = CONCAT31(auStack_5c[0]._1_3_,*puVar5);
    }
    else if (uVar3 != 0) goto LAB_2c5534f8;
  }
  else {
    puStack_64 = (uint *)FUN_2c54f538(&uStack_68,0);
    auStack_5c[0] = uStack_68;
LAB_2c5534f8:
    FUN_2c674668(puStack_64,puVar5,uVar3);
  }
  *(undefined1 *)((int)puStack_64 + uStack_68) = 0;
  uStack_60 = uStack_68;
  FUN_2c5392f4(&puStack_64,*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_2 + 0x98));
  piVar1 = (int *)FUN_2c5392f4(&puStack_64,*(undefined4 *)(param_2 + 0x7c),
                               *(undefined4 *)(param_2 + 0x80));
  if ((uint *)*piVar1 == (uint *)(piVar1 + 2)) {
    uStack_44 = piVar1[2];
    iStack_40 = piVar1[3];
    iStack_3c = piVar1[4];
    iStack_38 = piVar1[5];
    puStack_4c = &uStack_44;
  }
  else {
    uStack_44 = piVar1[2];
    puStack_4c = (uint *)*piVar1;
  }
  iStack_48 = piVar1[1];
  *piVar1 = (int)(piVar1 + 2);
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  FUN_2c5dcca4(&puStack_34,*(undefined4 *)(param_2 + 0xac));
  uVar3 = uStack_44;
  if (puStack_4c == &uStack_44) {
    uVar3 = 0xf;
  }
  if (uVar3 < (uint)(iStack_48 + iStack_30)) {
    if (puStack_34 == auStack_2c) {
      auStack_2c[0] = 0xf;
    }
    if ((uint)(iStack_48 + iStack_30) <= auStack_2c[0]) {
      piVar1 = (int *)FUN_2c539348(&puStack_34,0,0,puStack_4c,iStack_48);
      goto LAB_2c553488;
    }
  }
  piVar1 = (int *)FUN_2c5392f4(&puStack_4c);
LAB_2c553488:
  *param_1 = (int)(param_1 + 2);
  if ((int *)*piVar1 == piVar1 + 2) {
    iVar6 = piVar1[3];
    iVar4 = piVar1[4];
    iVar2 = piVar1[5];
    param_1[2] = piVar1[2];
    param_1[3] = iVar6;
    param_1[4] = iVar4;
    param_1[5] = iVar2;
  }
  else {
    *param_1 = *piVar1;
    param_1[2] = piVar1[2];
  }
  *piVar1 = (int)(piVar1 + 2);
  param_1[1] = piVar1[1];
  piVar1[1] = 0;
  *(undefined1 *)(piVar1 + 2) = 0;
  if (puStack_34 != auStack_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_4c != &uStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_64 != auStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c55354c == iStack_1c) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

