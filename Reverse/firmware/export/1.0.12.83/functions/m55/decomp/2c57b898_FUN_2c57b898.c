/* FUN_2c57b898 @ 0x2c57b898 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c57b898(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uStack_54;
  undefined4 uStack_50;
  uint *puStack_4c;
  uint uStack_48;
  uint auStack_44 [4];
  undefined1 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar1 = _LAB_2c57b970;
  iVar3 = *(int *)(param_1 + 0x24);
  iStack_24 = *_LAB_2c57b968;
  uVar2 = 0;
  if (iVar3 == 0) goto LAB_2c57b920;
  puVar5 = *(undefined1 **)(param_2 + 4);
  uVar4 = *(uint *)(param_2 + 8);
  uStack_50 = _LAB_2c57b970;
  puStack_4c = auStack_44;
  if ((puVar5 + uVar4 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c57b96c,param_2,param_3,0);
  }
  uStack_54 = uVar4;
  if (uVar4 < 0x10) {
    if (uVar4 == 1) {
      auStack_44[0] = CONCAT31(auStack_44[0]._1_3_,*puVar5);
    }
    else if (uVar4 != 0) goto LAB_2c57b94a;
  }
  else {
    puStack_4c = (uint *)FUN_2c57b828(&uStack_54,0);
    auStack_44[0] = uStack_54;
LAB_2c57b94a:
    FUN_2c674668(puStack_4c,puVar5,uVar4);
  }
  *(undefined1 *)((int)puStack_4c + uStack_54) = 0;
  uStack_34 = *(undefined1 *)(param_2 + 0x1c);
  uStack_30 = *(undefined4 *)(param_2 + 0x20);
  uStack_2c = *(undefined1 *)(param_2 + 0x24);
  uStack_2a = *(undefined2 *)(param_2 + 0x26);
  uStack_28 = *(undefined4 *)(param_2 + 0x28);
  uStack_48 = uStack_54;
  uVar2 = FUN_2c57b2e0(iVar3,&uStack_50);
  uStack_50 = uVar1;
  if (puStack_4c != auStack_44) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c57b920:
  if (*_LAB_2c57b968 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar2;
}

