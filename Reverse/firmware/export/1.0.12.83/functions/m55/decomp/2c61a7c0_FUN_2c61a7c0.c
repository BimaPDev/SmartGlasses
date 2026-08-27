/* FUN_2c61a7c0 @ 0x2c61a7c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_2c61a7c0(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puStack_40;
  int iStack_38;
  int iStack_34;
  
  iStack_34 = *_LAB_2c61a918;
  iVar7 = param_1 + 0x30;
  iVar2 = FUN_2c62ca10(iVar7);
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar8 = (uint)*(short *)(param_1 + 0x28);
    if (((uVar8 & 0x6000) == 0x2000) && ((int)(uVar8 & 0xffff9fff) < 0x7d1)) {
      uVar8 = 0;
    }
    puStack_40 = (undefined4 *)FUN_2c62ca10(iVar7);
    uVar9 = uVar8;
    if (puStack_40 != (undefined4 *)0x0) {
      do {
        iVar3 = FUN_2c62b108(puStack_40 + 2,0x57,&iStack_38);
        iVar2 = iStack_38;
        if (iVar3 != 1) {
          iVar2 = FUN_2c6033b4(param_1,0,0x57);
        }
        iVar3 = FUN_2c62b108(puStack_40 + 2,0x58,&iStack_38);
        if (iVar3 == 1) {
        }
        else {
          iStack_38._0_2_ = FUN_2c6033b4(param_1,0,0x58);
        }
        puVar1 = _LAB_2c61a92c;
        iVar3 = (int)(short)iStack_38;
        iStack_38 = 0;
        pcVar10 = (char *)*puStack_40;
        if (pcVar10 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,_LAB_2c61a920,0x2da,_LAB_2c61a924,_LAB_2c61a91c);
        }
        if (*pcVar10 != '\0') {
          do {
            if ((param_2 <= uVar8) && (uVar9 = param_2, param_2 != 0)) goto LAB_2c61a8b6;
            uVar4 = (*(code *)*puVar1)(pcVar10,&iStack_38);
            uVar5 = (*(code *)*puVar1)(pcVar10 + iStack_38,0);
            iVar6 = FUN_2c6298c0(iVar2,uVar4,uVar5);
            uVar8 = uVar8 + iVar6 + iVar3;
          } while (pcVar10[iStack_38] != '\0');
        }
        puStack_40 = (undefined4 *)FUN_2c62ca20(iVar7,puStack_40);
      } while (puStack_40 != (undefined4 *)0x0);
      uVar9 = uVar8 - iVar3;
    }
  }
LAB_2c61a8b6:
  if (*_LAB_2c61a918 != iStack_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return uVar9;
}

