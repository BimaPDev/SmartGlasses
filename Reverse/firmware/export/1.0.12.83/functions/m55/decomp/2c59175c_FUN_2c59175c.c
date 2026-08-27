/* FUN_2c59175c @ 0x2c59175c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59175c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 *puVar5;
  code *pcVar6;
  uint uStack_100;
  uint *puStack_fc;
  uint uStack_f8;
  uint auStack_f4 [4];
  uint *puStack_e4;
  uint uStack_e0;
  uint auStack_dc [16];
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [16];
  undefined1 uStack_80;
  undefined1 *puStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [72];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c591a40;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (1 < (ushort)(*(short *)(param_2 + 0x26) - 0x7aU)) {
    puStack_98 = auStack_90;
    puStack_7c = auStack_74;
    uStack_94 = 0;
    auStack_90[0] = 0;
    uStack_78 = 0;
    auStack_74[0] = 0;
    uStack_9c = _LAB_2c591a44;
    iVar1 = FUN_2c555b34(*(undefined4 *)(param_2 + 4),&uStack_9c);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c591a50,0x278,_LAB_2c591a60,_LAB_2c591a5c,_LAB_2c591a60);
    }
    uVar2 = FUN_2c58c9c0(_LAB_2c591a48,uStack_80);
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c591a50,0x27b,_LAB_2c591a60,_LAB_2c591a4c,_LAB_2c591a60,uVar2);
  }
  piVar4 = *(int **)(param_1 + 0x5c);
  if ((piVar4 != (int *)0x0) && (*(int **)(param_1 + 0x24) == piVar4)) {
    puVar5 = *(undefined1 **)(param_2 + 4);
    uVar3 = *(uint *)(param_2 + 8);
    pcVar6 = *(code **)(*piVar4 + 0x38);
    puStack_fc = auStack_f4;
    if ((puVar5 + uVar3 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) goto LAB_2c591ab0;
    uStack_100 = uVar3;
    if (uVar3 < 0x10) {
      if (uVar3 == 1) {
        auStack_f4[0] = CONCAT31(auStack_f4[0]._1_3_,*puVar5);
      }
      else if (uVar3 != 0) goto LAB_2c591aee;
    }
    else {
      puStack_fc = (uint *)FUN_2c58d6c0(&uStack_100,0);
      auStack_f4[0] = uStack_100;
LAB_2c591aee:
      FUN_2c674668(puStack_fc,puVar5,uVar3);
    }
    *(undefined1 *)((int)puStack_fc + uStack_100) = 0;
    uStack_f8 = uStack_100;
    (*pcVar6)(piVar4,&puStack_fc);
    if (puStack_fc != auStack_f4) goto LAB_2c59198a;
    goto LAB_2c591990;
  }
  FUN_2c590f14(param_1,piVar4);
  piVar4 = *(int **)(param_1 + 0x24);
  puVar5 = *(undefined1 **)(param_2 + 4);
  uVar3 = *(uint *)(param_2 + 8);
  pcVar6 = *(code **)(*piVar4 + 0x38);
  puStack_e4 = auStack_dc;
  if ((puVar5 + uVar3 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0)) {
LAB_2c591ab0:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c591b88);
  }
  uStack_100 = uVar3;
  if (uVar3 < 0x10) {
    if (uVar3 == 1) {
      auStack_dc[0] = CONCAT31(auStack_dc[0]._1_3_,*puVar5);
    }
    else if (uVar3 != 0) goto LAB_2c591a32;
  }
  else {
    puStack_e4 = (uint *)FUN_2c58d6c0(&uStack_100,0);
    auStack_dc[0] = uStack_100;
LAB_2c591a32:
    FUN_2c674668(puStack_e4,puVar5,uVar3);
  }
  *(undefined1 *)((int)puStack_e4 + uStack_100) = 0;
  uStack_e0 = uStack_100;
  (*pcVar6)(piVar4,&puStack_e4);
  if (puStack_e4 != auStack_dc) {
LAB_2c59198a:
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
LAB_2c591990:
  if (*_LAB_2c591a40 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

