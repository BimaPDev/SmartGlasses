/* FUN_2c609970 @ 0x2c609970 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c609970(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short sStack_90;
  short sStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  int iStack_88;
  short sStack_84;
  short sStack_82;
  short sStack_80;
  short sStack_7e;
  short sStack_7c;
  short sStack_7a;
  int iStack_78;
  undefined4 uStack_74;
  short sStack_70;
  short sStack_6e;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  short sStack_68;
  short sStack_66;
  int iStack_64;
  undefined1 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c609ae4;
  iVar2 = FUN_2c62a6b4(&sStack_90,*param_2,param_1[2],0);
  if (iVar2 == 0) goto LAB_2c609990;
  FUN_2c62a690(&sStack_90,(int)-*(short *)param_1[1],(int)-((short *)param_1[1])[1]);
  if ((param_2[3] == 0) && (*(byte *)((int)param_2 + 0x19) == 0)) {
    psVar3 = (short *)param_1[1];
    sVar1 = (psVar3[2] + 1) - *psVar3;
    if (param_2[1] == 0) {
      if (*(byte *)(param_2 + 6) < 0xfd) goto LAB_2c6099be;
      iVar2 = func_0x2c60a118();
    }
    else {
      psVar4 = (short *)*param_2;
      sStack_7c = (psVar4[2] + 1) - *psVar4;
      iStack_78 = (int)(short)((psVar4[2] + 1) - *psVar4) << 2;
      sStack_7a = (psVar4[3] + 1) - psVar4[1];
      sStack_84 = (*psVar3 + sStack_90) - *psVar4;
      sStack_80 = sStack_7c + sStack_84 + -1;
      iStack_64 = (int)sVar1 << 2;
      uStack_6c = uStack_8c;
      sStack_82 = (sStack_8e + psVar3[1]) - psVar4[1];
      sStack_70 = sStack_90;
      sStack_6e = sStack_8e;
      sStack_7e = sStack_7a + sStack_82 + -1;
      uStack_6a = uStack_8a;
      uStack_60 = *(undefined1 *)(param_2 + 6);
      uStack_58 = 0x100;
      iStack_88 = param_2[1];
      uStack_74 = *param_1;
      sStack_68 = sVar1;
      sStack_66 = (psVar3[3] + 1) - psVar3[1];
      uStack_5c = (uint)*(byte *)((int)param_2 + 0x19);
      iVar2 = func_0x2c60a2f8(&iStack_88);
    }
    if (iVar2 == 1) goto LAB_2c609990;
  }
LAB_2c6099be:
  FUN_2c60d5dc(param_1,param_2);
LAB_2c609990:
  if (*_LAB_2c609ae4 == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

