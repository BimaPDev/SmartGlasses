/* FUN_2c4dc18c @ 0x2c4dc18c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_2c4dc18c(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = *_LAB_2c4dc3b0;
  if ((char)param_1[0x68] == '\0') {
    iVar2 = func_0x2c4dbe70();
    if (iVar2 != 0) {
      cVar8 = (char)param_1[0x68];
      if (cVar8 != '\0') {
        param_2[5] = 0;
        goto LAB_2c4dc1ea;
      }
      goto LAB_2c4dc1fe;
    }
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd9dd,0x34,1);
    uVar7 = 0x34;
    uVar3 = _LAB_2c4dc3b4;
LAB_2c4dc1d2:
    uVar6 = 0;
    uVar5 = _LAB_2c4dc3c0;
  }
  else {
LAB_2c4dc1fe:
    puVar1 = _LAB_2c4dc3c4;
    iStack_2c = param_2[1];
    uStack_28 = *param_2;
    iVar2 = param_1[0x67];
    iStack_24 = iStack_2c;
    if (iStack_2c != 0) {
      uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
      *puVar1 = uVar3;
      iVar4 = FUN_2c4cb004(iVar2,&uStack_28,&iStack_24,&iStack_2c);
      if (iVar4 != 0) {
        cVar8 = '\0';
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd9dd,0x43,iVar4);
        FUN_2c4e0504(_LAB_2c4dc3c0,0,0,0,_DAT_2c4dc3bc,0x43,_LAB_2c4dc3b8,0x1300,_LAB_2c4dc3c8);
        goto LAB_2c4dc1ea;
      }
    }
    uVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    iVar4 = param_2[5];
    *puVar1 = uVar3;
    cVar8 = '\0';
    iVar4 = FUN_2c4cb050(iVar2,param_2[4],iVar4 / 2,*(undefined1 *)((int)param_1 + 0x165),0);
    if (iVar4 != 0x1002) {
      if (iVar4 != 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd9dd,0x4f,0x703);
        FUN_2c4e0504(_LAB_2c4dc3c0,0,0,0,_DAT_2c4dc3bc,0x4f,_LAB_2c4dc3b8,0x1300,_LAB_2c4dc3d4,iVar4
                     ,param_1[0x4d]);
        *(short *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x1a) = (short)iVar4;
        FUN_2c4caedc(iVar2,0x603,1);
        if (0xfff < (iVar4 - 0x4000U & 0xffff)) {
          FUN_2c674268(param_2[4],0,param_2[5]);
          goto LAB_2c4dc1ea;
        }
      }
      iStack_20 = 0;
      func_0x2c4cae80(iVar2,&iStack_20);
      iVar4 = iStack_20;
      if ((int)(param_2[2] << 8) < 0) {
        iStack_20 = 0;
        iStack_2c = iStack_2c + iVar4;
        iVar2 = FUN_2c4caedc(iVar2,0x603,1);
        if (iVar2 != 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0xd9dd,0x62,iVar2);
          uVar7 = 0x62;
          uVar3 = _LAB_2c4dc3c8;
          goto LAB_2c4dc1d2;
        }
      }
      if ((char)param_1[0x68] == '\0') {
        FUN_2c4dc0c4(param_1);
      }
      param_1[0x69] = iStack_20;
      param_2[1] = iStack_24 - iStack_2c;
      if (*(byte *)(param_1 + 0x59) != 0) {
        param_2[5] = param_1[0x5e] *
                     (int)(short)(ushort)*(byte *)((int)param_1 + 0x165) *
                     (int)(short)(ushort)*(byte *)(param_1 + 0x59);
      }
      cVar8 = '\x01';
      goto LAB_2c4dc1ea;
    }
    uVar6 = 7;
    uVar7 = 0x49;
    uVar5 = _LAB_2c4dc3d0;
    uVar3 = _LAB_2c4dc3cc;
  }
  cVar8 = '\0';
  FUN_2c4e0504(uVar5,uVar6,0,0,_DAT_2c4dc3bc,uVar7,_LAB_2c4dc3b8,0x1300,uVar3);
LAB_2c4dc1ea:
  if (*_LAB_2c4dc3b0 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return cVar8;
}

