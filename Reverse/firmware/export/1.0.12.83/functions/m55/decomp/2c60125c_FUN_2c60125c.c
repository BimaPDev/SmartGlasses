/* FUN_2c60125c @ 0x2c60125c */

void FUN_2c60125c(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  undefined4 uStack_28;
  int local_24;
  
  local_24 = *DAT_2c601388;
  puVar8 = *(undefined4 **)(param_1 + 8);
  FUN_2c607338(param_2,auStack_34,param_3,0);
  uVar4 = FUN_2c600c2c(param_2);
  FUN_2c62a66c(auStack_34,uVar4);
  iVar5 = FUN_2c62a6b4(auStack_3c,puVar8,auStack_34);
  if ((iVar5 == 0) && (iVar5 = FUN_2c606b94(param_2,0x80000), iVar5 == 0)) {
    iVar5 = FUN_2c606b94(param_2,0x80000);
    bVar1 = false;
    bVar3 = false;
    if (iVar5 == 0) goto LAB_2c601348;
LAB_2c6012d0:
    bVar1 = bVar3;
    local_2c = *puVar8;
    uStack_28 = puVar8[1];
  }
  else {
    *(undefined1 **)(param_1 + 8) = auStack_3c;
    bVar1 = true;
    FUN_2c602340(param_2,0x14,param_1);
    FUN_2c602340(param_2,0x15,param_1);
    FUN_2c602340(param_2,0x16,param_1);
    iVar5 = FUN_2c606b94(param_2,0x80000);
    bVar3 = bVar1;
    if (iVar5 != 0) goto LAB_2c6012d0;
LAB_2c601348:
    iVar5 = FUN_2c62a6b4(&local_2c,puVar8,param_2 + 0x14);
    if (iVar5 == 0) goto joined_r0x2c60135c;
  }
  *(undefined4 **)(param_1 + 8) = &local_2c;
  iVar5 = FUN_2c6041fc(param_2);
  if (iVar5 != 0) {
    iVar7 = 0;
    do {
      uVar4 = *(undefined4 *)(**(int **)(param_2 + 8) + iVar7 * 4);
      iVar6 = FUN_2c606b94(uVar4,1);
      if (iVar6 == 0) {
        FUN_2c60138c(param_1,uVar4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar5 != iVar7);
  }
joined_r0x2c60135c:
  if (bVar1) {
    *(undefined1 **)(param_1 + 8) = auStack_3c;
    FUN_2c602340(param_2,0x17,param_1);
    FUN_2c602340(param_2,0x18,param_1);
    FUN_2c602340(param_2,0x19,param_1);
  }
  piVar2 = DAT_2c601388;
  *(undefined4 **)(param_1 + 8) = puVar8;
  if (*piVar2 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

