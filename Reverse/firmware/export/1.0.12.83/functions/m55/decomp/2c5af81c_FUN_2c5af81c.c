/* FUN_2c5af81c @ 0x2c5af81c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5af81c(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [4];
  int iStack_24;
  
  piVar2 = _LAB_2c5af8b4;
  iStack_24 = *_LAB_2c5af8b8;
  puStack_3c = auStack_34;
  if (*_LAB_2c5af8b4 == 0) {
    FUN_2c4723c4(param_1,param_2,0);
    *piVar2 = 1;
  }
  puVar3 = _LAB_2c5af8bc;
  puStack_3c = (undefined4 *)FUN_2c47245c(0,0x1a);
  auStack_34[0] = 0x19;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *puStack_3c = *puVar3;
  puStack_3c[1] = uVar4;
  puStack_3c[2] = uVar5;
  puStack_3c[3] = uVar6;
  uStack_38 = 0x19;
  uVar4 = puVar3[4];
  puStack_3c[5] = puVar3[5];
  uVar1 = *(undefined1 *)(puVar3 + 6);
  puStack_3c[4] = uVar4;
  *(undefined1 *)(puStack_3c + 6) = uVar1;
  *(undefined1 *)((int)puStack_3c + 0x19) = 0;
  FUN_2c5af7b4(param_1,param_2,0,0,&puStack_3c);
  if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*_LAB_2c5af8b8 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

