/* FUN_2c568010 @ 0x2c568010 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c568010(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_34;
  undefined4 uStack_24;
  int iStack_20;
  
  uStack_24 = *(undefined4 *)(param_2 + 4);
  iVar3 = *_LAB_2c5680a4;
  iVar2 = FUN_2c66b624(_LAB_2c5680a8,uStack_24,param_3,0);
  if (iVar2 == 0) {
    if (*_LAB_2c5680a4 == iVar3) {
      iStack_34 = *DAT_2c567e54;
      iVar2 = FUN_2c56751c(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                           _LAB_2c567e58,0);
      if (iVar2 == 0) {
        uStack_4c = *(undefined4 *)(_LAB_2c567e7c + 4);
        uStack_50 = _LAB_2c567e74;
        FUN_2c593c2c(param_1,&uStack_50,0);
        if (*DAT_2c567e54 == iStack_34) {
          return;
        }
      }
      else {
        iVar3 = FUN_2c56751c(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                             _LAB_2c567e5c);
        iVar2 = _LAB_2c567e70;
        if ((iVar3 != 0) && (iVar2 = _LAB_2c567e8c, *(int *)(param_2 + 0x68) != 0)) {
          iVar2 = FUN_2c66b624(*(int *)(param_2 + 0x68),_LAB_2c567e60);
          if (iVar2 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar4 = FUN_2c5c55d8();
          iVar3 = FUN_2c5c5d50(uVar4,_LAB_2c567e60);
          iVar2 = _LAB_2c567e78;
          if (iVar3 != 0) {
            halt_baddata();
          }
        }
        uStack_50 = _LAB_2c567e74;
        uStack_4c = *(undefined4 *)(iVar2 + 4);
        FUN_2c593c2c(param_1,&uStack_50,0);
        if (*DAT_2c567e54 == iStack_34) {
          FUN_2c5921a0(param_1);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
LAB_2c56809e:
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  iVar2 = FUN_2c66b624(_LAB_2c5680ac,uStack_24);
  if (iVar2 == 0) {
    if (*_LAB_2c5680a4 != iVar3) goto LAB_2c56809e;
    iVar3 = *_LAB_2c5678fc;
    uVar4 = *(undefined4 *)(param_2 + 0x1c);
    uStack_24 = *(undefined4 *)(param_2 + 0x20);
    iVar2 = FUN_2c56751c(uVar4,uStack_24,_LAB_2c567900,0);
    if ((iVar2 == 0) || (iVar2 = FUN_2c56751c(uVar4,uStack_24,_LAB_2c567904), iVar2 == 0)) {
      if (*_LAB_2c5678fc == iVar3) {
        FUN_2c620fa4(0x400,0,0,0);
        uVar4 = FUN_2c5c55d8();
        FUN_2c5c5a38(uVar4,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_2c5678f6:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    iVar2 = FUN_2c56751c(*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38),
                         _LAB_2c567908);
    if (iVar2 == 0) {
      FUN_2c593c2c(param_1,&stack0xffffffe4,0);
      if (*_LAB_2c5678fc == iVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c59254c,0x12f);
      }
      goto LAB_2c5678f6;
    }
    if (*_LAB_2c5678fc != iVar3) goto LAB_2c5678f6;
    iVar3 = *(int *)(param_2 + 0x68);
    iVar2 = *_LAB_2c567824;
    if (iVar3 == 0) {
      iStack_20 = *(int *)(_LAB_2c567848 + 4);
      uStack_24 = _LAB_2c56783c;
      FUN_2c5931e0(param_1,&uStack_24,*(undefined4 *)(param_2 + 0x4c),0);
      iVar3 = *_LAB_2c567824;
    }
    else {
      iVar1 = FUN_2c66b624(_LAB_2c567828,iVar3,0,0);
      if (iVar1 == 0) {
        iStack_20 = *(int *)(_LAB_2c56784c + 4);
        uStack_24 = _LAB_2c56783c;
        FUN_2c593c2c(param_1,&uStack_24,0);
        if (*_LAB_2c567824 == iVar2) goto code_r0x2c5921a0;
        goto LAB_2c5677ae;
      }
      iVar3 = FUN_2c66b624(_LAB_2c56782c,iVar3);
      if (iVar3 == 0) {
        iVar1 = *(int *)(_LAB_2c567834 + 4);
        uVar4 = FUN_2c5c55d8();
        iVar3 = func_0x2c5c5970(uVar4,_LAB_2c56782c);
        if (iVar3 != 0) {
          FUN_2c620fa4(0x400,0);
          uVar4 = FUN_2c5c55d8();
          FUN_2c5c5a38(uVar4,0);
          iVar1 = *(int *)(_LAB_2c567844 + 4);
        }
        FUN_2c5a2398();
        func_0x2c5a2410();
        iVar3 = FUN_2c5a3660();
        if (iVar3 != 0) {
          FUN_2c5a2398();
          func_0x2c5a2410();
          iVar3 = func_0x2c5a3588();
          if (iVar3 == 1) {
            iVar1 = *(int *)(_LAB_2c567838 + 4);
          }
          else {
            iVar1 = *(int *)(_LAB_2c567840 + 4);
          }
        }
        iVar3 = _LAB_2c567838;
        FUN_2c567400();
        if (iVar1 == *(int *)(iVar3 + 4)) {
          if (*_LAB_2c567824 == iVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_2c62c82c(4,_LAB_2c592628,0x144);
          }
          goto LAB_2c5677ae;
        }
        uVar4 = *(undefined4 *)(param_2 + 0x4c);
        iStack_20 = iVar1;
      }
      else {
        uVar4 = FUN_2c5c55d8();
        iVar3 = func_0x2c5c5970(uVar4,*(undefined4 *)(param_2 + 0x68));
        if (iVar3 == 0) {
          iVar3 = *(int *)(_LAB_2c567830 + 4);
        }
        else {
          FUN_2c620fa4(0x400,0);
          uVar4 = FUN_2c5c55d8();
          iVar3 = FUN_2c5c5a38(uVar4,0);
          if (iVar3 == 0) {
            iVar3 = *(int *)(_LAB_2c567850 + 4);
          }
          else {
            iVar3 = *(int *)(_LAB_2c567844 + 4);
          }
        }
        iVar1 = func_0x2c5924c4(param_1);
        if ((iVar1 != 0) && (iVar1 = func_0x2c5922b4(param_1), iVar1 != 1)) {
          if (*_LAB_2c567824 == iVar2) {
            return;
          }
          goto LAB_2c5677ae;
        }
        uVar4 = *(undefined4 *)(param_2 + 0x4c);
        iStack_20 = iVar3;
      }
      uStack_24 = _LAB_2c56783c;
      FUN_2c5931e0(param_1,&uStack_24,uVar4,0);
      iVar3 = *_LAB_2c567824;
    }
    if (iVar3 != iVar2) {
LAB_2c5677ae:
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
  else {
    FUN_2c593c2c(param_1,&stack0xffffffe4,0);
    if (*_LAB_2c5680a4 != iVar3) goto LAB_2c56809e;
  }
code_r0x2c5921a0:
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c592204,0xc4,DAT_2c592200);
}

