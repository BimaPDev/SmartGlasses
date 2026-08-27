/* FUN_2c4ae2f8 @ 0x2c4ae2f8 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4ae2f8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_6c;
  int aiStack_68 [3];
  undefined4 uStack_5c;
  uint uStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar1 = _LAB_2c4ae4b4;
  iStack_24 = *_LAB_2c4ae4b0;
  iVar3 = FUN_2c4b4980(0xac,param_2,param_3,0);
  *(int *)(iVar1 + 0x6d4) = iVar3;
  if (iVar3 == 0) {
    iVar3 = 5;
  }
  else {
    FUN_2c674268(iVar3,0,0xac);
    if ((param_1 < 1) || (param_2 < 1)) {
      uVar5 = 0;
      param_2 = 0;
    }
    else {
      uVar5 = param_1 + 0xfU & 0xfffffff0;
    }
    iStack_50 = iVar1;
    uStack_5c = *_LAB_2c4ae4b8;
    uStack_58 = uVar5;
    iStack_54 = param_2;
    iVar3 = FUN_2c4b4674(0,&uStack_5c);
    if (iVar3 == 0) {
      iStack_6c = iVar3;
      aiStack_68[0] = iVar3;
      FUN_2c4ae22c(0,&iStack_6c,aiStack_68);
      aiStack_68[1] = 0x30;
      iVar3 = FUN_2c4b4674(10,aiStack_68 + 1);
      if (iVar3 == 0) {
        if (((iStack_6c == 0x265) && (aiStack_68[2] == 0x40c)) && (aiStack_68[0] == 0x1001)) {
          *(undefined4 *)(iVar1 + 0x6b4) = 0;
          *(undefined4 *)(iVar1 + 0x6a4) = uStack_4c;
          *(undefined4 *)(iVar1 + 0x6b8) = 0;
          *(undefined4 *)(iVar1 + 0x6ac) = uStack_44;
          *(undefined4 *)(iVar1 + 0x6a8) = uStack_48;
          *(undefined4 *)(iVar1 + 0x6b0) = uStack_5c;
          iVar3 = _LAB_2c4ae4b4;
          if ((0 < (int)uVar5) && (0 < param_2)) {
            *(int *)(iVar1 + 0x6c8) = iStack_30;
            *(undefined4 *)(iVar1 + 0x6cc) = uStack_2c;
            *(undefined4 *)(iVar1 + 0x6c4) = uStack_34;
            *(undefined4 *)(iVar1 + 0x6c0) = uStack_38;
            *(undefined4 *)(iVar1 + 0x6d0) = uStack_28;
            iVar3 = FUN_2c4ae148(iVar3,0xa35);
            if (((iVar3 != 0) ||
                ((iVar3 = FUN_2c4ae148(_LAB_2c4ae4b4,0xac8,iStack_30), iVar3 != 0 ||
                 (iVar3 = FUN_2c4ae148(_LAB_2c4ae4b4,0xacb,*(int *)(iVar1 + 0x6c0) + iStack_30),
                 iVar3 != 0)))) || (iVar3 = FUN_2c4ae148(_LAB_2c4ae4b4,0xacc,uStack_2c), iVar3 != 0)
               ) goto LAB_2c4ae354;
          }
          iVar2 = _LAB_2c4ae4b4;
          iVar4 = 0xa90;
          do {
            iVar3 = FUN_2c4ae148(iVar2,iVar4,0);
            if (iVar3 != 0) goto LAB_2c4ae354;
            iVar4 = iVar4 + 1;
          } while (iVar4 != 0xa94);
          *(undefined2 *)(iVar1 + 0x72c) = 0;
          *(uint *)(iVar1 + 0x738) = uVar5;
          *(int *)(iVar1 + 0x73c) = param_2;
          *(undefined4 *)(iVar1 + 0x6ec) = 0;
          *(undefined4 *)(iVar1 + 0x6e8) = 0;
          *(undefined4 *)(iVar1 + 0x6e4) = 0;
          *(undefined4 *)(iVar1 + 0x6e0) = 0;
          *(undefined4 *)(iVar1 + 0x768) = 0;
          goto LAB_2c4ae354;
        }
      }
      else {
        aiStack_68[2] = 0;
      }
      iVar3 = 7;
      FUN_2c66ac44(_LAB_2c4ae4bc,iStack_6c,aiStack_68[0],aiStack_68[2]);
      FUN_2c66ac44(_LAB_2c4ae4c0,0x265,0x1001,0x40c);
    }
  }
LAB_2c4ae354:
  if (*_LAB_2c4ae4b0 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return iVar3;
}

