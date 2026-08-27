/* FUN_2c4dcd88 @ 0x2c4dcd88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_2c4dcd88(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined2 uStack_26;
  undefined1 auStack_24 [2];
  ushort uStack_22;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar3 = (char *)*param_2;
  iStack_1c = *_LAB_2c4dcea4;
  if (*pcVar3 == -0x53) {
    if (pcVar3[3] == '\0') goto LAB_2c4dcda6;
LAB_2c4dcdb6:
    iVar8 = param_1[0x66];
    uStack_26 = 0;
    if ((char)param_1[0x67] == '\0') {
      cVar1 = *pcVar3;
      if (cVar1 == -100) {
        iVar2 = FUN_2c4cabf4(iVar8,pcVar3,*(undefined2 *)(param_2 + 1),&uStack_26);
        if (iVar2 != 0) {
          FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x242f,0x40,1);
          uVar6 = 0x40;
          uVar9 = _LAB_2c4dcea8;
LAB_2c4dce00:
          FUN_2c4e0504(_LAB_2c4dceb4,0,0,0,_LAB_2c4dceb0,uVar6,_LAB_2c4dceac,0x1300,uVar9);
          uVar7 = 0;
          goto LAB_2c4dce12;
        }
      }
      else {
        if (cVar1 == -0x53) {
          bVar4 = *(byte *)(iVar8 + 7) | 1;
        }
        else {
          if (cVar1 != -0x72) {
            FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x242f,0x49,1);
            uVar6 = 0x49;
            uVar9 = _LAB_2c4dceb8;
            goto LAB_2c4dce00;
          }
          bVar4 = *(byte *)(iVar8 + 7) | 2;
        }
        *(byte *)(iVar8 + 7) = bVar4;
      }
      FUN_2c4dcc98(param_1);
      *(undefined1 *)(param_1 + 0x67) = 1;
    }
    uStack_20 = param_2[4];
    uStack_22 = 0;
    func_0x2c673b38(iVar8,*param_2,*(undefined2 *)(param_2 + 1),&uStack_26,auStack_24,0x200,
                    param_1 + 0x68);
    uVar5 = (uint)uStack_22;
  }
  else {
    if ((*pcVar3 != -0x72) || (pcVar3[3] != '\x01')) goto LAB_2c4dcdb6;
LAB_2c4dcda6:
    uVar5 = 0;
  }
  uVar7 = 1;
  param_2[5] = uVar5;
LAB_2c4dce12:
  if (*_LAB_2c4dcea4 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar7;
}

