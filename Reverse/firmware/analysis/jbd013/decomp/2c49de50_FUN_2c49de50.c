/* FUN_2c49de50 @ 0x2c49de50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c49de50(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uStack_1a;
  byte bStack_19;
  undefined2 uStack_18;
  int iStack_14;
  
  iVar1 = _LAB_2c49e018;
  iStack_14 = *_LAB_2c49e01c;
  uStack_1a = 0;
  if (*(int *)(_LAB_2c49e018 + 0x48) != 1) {
LAB_2c49dff2:
    uVar4 = 0xffffffff;
    goto LAB_2c49debc;
  }
  if (param_1 == 0x2b) {
    uVar3 = *param_2;
    uVar4 = (uVar3 & 0xffffff) >> 0x10;
    if ((uVar3 & 0xff0000) == 0) {
      FUN_2c49c6a0(_LAB_2c49e018,(uVar3 & 0xffff) >> 8,&uStack_1a);
      FUN_2c648600(_LAB_2c49e020,*(undefined1 *)((int)param_2 + 1),uStack_1a);
      goto LAB_2c49debc;
    }
    goto LAB_2c49dff2;
  }
  *param_2 = 0;
  switch(param_1) {
  case 0:
    if (*(int *)(iVar1 + 0x48) == 1) {
      uVar4 = *_LAB_2c49e024;
      if ((int)uVar4 < 1) {
        FUN_2c49ce4c(_LAB_2c49e018);
        uVar4 = *(uint *)(iVar1 + 0x14);
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
    *param_2 = uVar4;
    uVar4 = 0;
    FUN_2c648600(_LAB_2c49e028);
    break;
  case 1:
    if (*(int *)(iVar1 + 0x48) == 1) {
      uVar4 = *_LAB_2c49e02c;
      if ((int)uVar4 < -2999) {
        FUN_2c49cb44(_LAB_2c49e018);
        uVar4 = *(uint *)(iVar1 + 0x2c);
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
    *param_2 = uVar4;
    uVar4 = 0;
    FUN_2c648600(_LAB_2c49e030);
    break;
  case 2:
    if (*(int *)(iVar1 + 0x48) == 1) {
      uVar4 = *_LAB_2c49e034;
      if ((int)uVar4 < 0) {
        uVar4 = *(uint *)(iVar1 + 0x20);
      }
    }
    else {
      uVar4 = 0x14;
    }
    *param_2 = uVar4;
    uVar4 = 0;
    FUN_2c648600(_LAB_2c49e038);
    break;
  case 3:
    if (*(int *)(iVar1 + 0x48) == 1) {
      uVar4 = *_LAB_2c49e03c;
      if ((int)uVar4 < -2999) {
        uVar4 = *(uint *)(iVar1 + 0x24);
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
    *param_2 = uVar4;
    uVar4 = 0;
    FUN_2c648600(_LAB_2c49e040);
    break;
  case 4:
    if (*(int *)(iVar1 + 0x48) == 1) {
      uVar4 = *_LAB_2c49e044;
      if ((int)uVar4 < 0) {
        uStack_18 = 0;
        iVar2 = FUN_2c49c9e8(_LAB_2c49e018,0xa4,&uStack_18);
        if (iVar2 < 0) {
          uVar4 = *(uint *)(iVar1 + 0x30);
        }
        else {
          iVar2 = (uint)uStack_18._1_1_ + (uint)(byte)uStack_18 * 0x100;
          uVar4 = iVar2 >> 4;
          *_LAB_2c49e04c = (short)iVar2;
          *(uint *)(iVar1 + 0x30) = uVar4;
        }
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
    *param_2 = uVar4;
    uVar4 = 0;
    FUN_2c648600(_LAB_2c49e048);
    break;
  default:
    goto LAB_2c49deba;
  case 0x13:
    uVar4 = 0;
    FUN_2c49c938();
    break;
  case 0x29:
    uVar4 = 0;
    do {
      uVar3 = uVar4 & 0xff;
      uVar4 = uVar4 + 1;
      FUN_2c49de50(uVar3,param_2);
    } while (uVar4 != 0x13);
    goto LAB_2c49deba;
  case 0x2a:
    iVar2 = FUN_2c49c6a0(_LAB_2c49e018,0xab,&bStack_19);
    if (-1 < iVar2) {
      uVar4 = 0;
      *(uint *)(iVar1 + 0x38) = (uint)bStack_19;
      FUN_2c49cec0();
      break;
    }
LAB_2c49deba:
    uVar4 = 0;
  }
LAB_2c49debc:
  if (*_LAB_2c49e01c == iStack_14) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

