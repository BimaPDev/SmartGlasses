/* FUN_2c544dc4 @ 0x2c544dc4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c544dc4(int param_1,int param_2)

{
  short sVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uStack_bc;
  int *piStack_b8;
  uint *puStack_b4;
  uint uStack_b0;
  uint auStack_ac [4];
  undefined4 uStack_9c;
  uint *puStack_98;
  undefined1 *puStack_94;
  uint uStack_90;
  undefined1 auStack_8c [12];
  undefined1 **ppuStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [12];
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [48];
  int iStack_2c;
  
  uVar6 = _LAB_2c545028;
  uVar5 = _LAB_2c545024;
  sVar1 = *(short *)(param_2 + 0x26);
  iStack_2c = *_LAB_2c54500c;
  if (sVar1 == 0x65) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    puStack_94 = (undefined1 *)0x0;
    uStack_90 = uStack_90 & 0xffffff00;
    uStack_7c = 0;
    puStack_78 = (undefined1 *)((uint)puStack_78 & 0xffffff00);
    uStack_60 = 0;
    auStack_5c[0] = 0;
    uStack_9c = _LAB_2c545028;
    puStack_98 = &uStack_90;
    ppuStack_80 = &puStack_78;
    puStack_64 = auStack_5c;
    iVar4 = func_0x2c555e60(*(undefined4 *)(param_2 + 4),&uStack_9c);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c545018,0x28,_DAT_2c545010,_LAB_2c545014,_DAT_2c545010);
    }
    iVar4 = func_0x2c547c28(uVar5);
    if ((iVar4 == 0) || (iVar4 = func_0x2c548290(uVar5,&puStack_98), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c545018,0x2e,_DAT_2c545010,_LAB_2c54501c,_DAT_2c545010);
    }
    FUN_2c547edc(&uStack_bc,uVar5);
    FUN_2c55e854(uStack_bc,ppuStack_80,1,0);
    if ((piStack_b8 != (int *)0x0) &&
       (iVar4 = piStack_b8[1], piStack_b8[1] = iVar4 + -1, iVar4 + -1 == 0)) {
      (**(code **)(*piStack_b8 + 8))();
      iVar4 = piStack_b8[2];
      piStack_b8[2] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        (**(code **)(*piStack_b8 + 0xc))();
      }
    }
    FUN_2c547aec(uVar5);
    uStack_9c = uVar6;
    if (puStack_64 != auStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (ppuStack_80 != &puStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_98 == &uStack_90) {
      uVar5 = 0;
      goto LAB_2c544e4c;
    }
    goto LAB_2c544e46;
  }
  if (sVar1 == 0x68) {
    uVar5 = _LAB_2c545020;
    uStack_9c = _LAB_2c545020;
    auStack_8c[0] = 0;
    uStack_90 = 0;
    puStack_94 = auStack_8c;
    iVar4 = func_0x2c55527c(*(undefined4 *)(param_2 + 4),&uStack_9c);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_DAT_2c545018,0x35,_DAT_2c545010,_LAB_2c545014,_DAT_2c545010);
    }
    if (((uint)puStack_98 & 0xff) == 2) {
      FUN_2c547edc(&uStack_bc,*(undefined4 *)(param_1 + 4));
      func_0x2c55e9ec(uStack_bc,0);
      if ((piStack_b8 != (int *)0x0) &&
         (iVar4 = piStack_b8[1], piStack_b8[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*piStack_b8 + 8))(piStack_b8);
        iVar4 = piStack_b8[2];
        piStack_b8[2] = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          (**(code **)(*piStack_b8 + 0xc))(piStack_b8);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c545110,0x3b,DAT_2c54510c,_LAB_2c545108);
    }
    if (((uint)puStack_98 & 0xff) == 1) {
      uVar5 = *(undefined4 *)(param_1 + 4);
      FUN_2c547edc(&uStack_bc,uVar5);
      func_0x2c55e9ec(uStack_bc,1);
      if ((piStack_b8 != (int *)0x0) &&
         (iVar4 = piStack_b8[1], piStack_b8[1] = iVar4 + -1, iVar4 + -1 == 0)) {
        (**(code **)(*piStack_b8 + 8))(piStack_b8);
        iVar4 = piStack_b8[2];
        piStack_b8[2] = iVar4 + -1;
        if (iVar4 + -1 == 0) {
          (**(code **)(*piStack_b8 + 0xc))(piStack_b8);
        }
      }
      FUN_2c547aec(uVar5);
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c545110,0x42,DAT_2c54510c,_LAB_2c54511c);
    }
    uStack_9c = uVar5;
    if (puStack_94 != auStack_8c) goto LAB_2c544e46;
    uVar5 = 0;
    goto LAB_2c544e4c;
  }
  if (sVar1 != 4) {
    uVar5 = 0xffffffff;
    goto LAB_2c544e4c;
  }
  uVar6 = *(undefined4 *)(param_1 + 4);
  uStack_9c = _LAB_2c545024;
  uStack_90 = 0;
  auStack_8c[0] = 0;
  uStack_74 = 0;
  auStack_70[0] = 0;
  puStack_94 = auStack_8c;
  puStack_78 = auStack_70;
  iVar4 = FUN_2c5557f4(*(undefined4 *)(param_2 + 4),&uStack_9c);
  uVar3 = uStack_90;
  puVar2 = puStack_94;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_DAT_2c545018,0x4a,_DAT_2c545010,_LAB_2c545014,_DAT_2c545010);
  }
  puStack_b4 = auStack_ac;
  if ((puStack_94 + uStack_90 != (undefined1 *)0x0) && (puStack_94 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c545120);
  }
  uStack_bc = uStack_90;
  if (uStack_90 < 0x10) {
    if (uStack_90 == 1) {
      auStack_ac[0] = CONCAT31(auStack_ac[0]._1_3_,*puStack_94);
    }
    else if (uStack_90 != 0) goto LAB_2c544f5c;
  }
  else {
    puStack_b4 = (uint *)FUN_2c544b1c(&uStack_bc,0);
    auStack_ac[0] = uStack_bc;
LAB_2c544f5c:
    FUN_2c674668(puStack_b4,puVar2,uVar3);
  }
  *(undefined1 *)((int)puStack_b4 + uStack_bc) = 0;
  uStack_b0 = uStack_bc;
  FUN_2c548220(uVar6,&puStack_b4);
  if (puStack_b4 != auStack_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  uStack_9c = uVar5;
  if (puStack_78 != auStack_70) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  uVar5 = 0;
  if (puStack_94 == auStack_8c) {
LAB_2c544e4c:
    if (*_LAB_2c54500c != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return uVar5;
  }
LAB_2c544e46:
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

