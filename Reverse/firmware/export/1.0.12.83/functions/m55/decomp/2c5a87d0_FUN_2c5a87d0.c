/* FUN_2c5a87d0 @ 0x2c5a87d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a87d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uStack_20;
  int iStack_1c;
  
  uVar1 = _LAB_2c5a886c;
  iStack_1c = *_LAB_2c5a8868;
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  if (puVar3 == *(undefined4 **)(param_1 + 0x2c)) {
    FUN_2c5a8570(param_1 + 0x24,puVar3,param_2);
    goto LAB_2c5a881c;
  }
  puVar2 = puVar3 + 4;
  puVar3[1] = *(undefined4 *)(param_2 + 4);
  *puVar3 = uVar1;
  puVar3[2] = puVar2;
  puVar5 = *(undefined1 **)(param_2 + 8);
  uVar4 = *(uint *)(param_2 + 0xc);
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c5a8870);
  }
  uStack_20 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      *(undefined1 *)(puVar3 + 4) = *puVar5;
    }
    else if (uVar4 != 0) goto LAB_2c5a883c;
  }
  else {
    puVar2 = (undefined4 *)FUN_2c5a83b0(&uStack_20,0);
    puVar3[2] = puVar2;
    puVar3[4] = uStack_20;
LAB_2c5a883c:
    FUN_2c674668(puVar2,puVar5,uVar4);
    puVar2 = (undefined4 *)puVar3[2];
  }
  puVar3[3] = uStack_20;
  *(undefined1 *)((int)puVar2 + uStack_20) = 0;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 0x20;
LAB_2c5a881c:
  if (*_LAB_2c5a8868 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

