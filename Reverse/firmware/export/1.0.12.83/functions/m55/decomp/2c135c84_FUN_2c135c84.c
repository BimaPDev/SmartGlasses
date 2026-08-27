/* FUN_2c135c84 @ 0x2c135c84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c135c84(undefined4 param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_225 [513];
  uint uStack_24;
  
  pcVar2 = _DAT_2c135da0;
  uStack_24 = *_DAT_2c135d9c;
  if (*_DAT_2c135da0 == '\0') {
LAB_2c135d02:
    lVar9 = (ulonglong)param_2 << 0x20;
    goto LAB_2c135d04;
  }
  if (param_2 == 2) {
    if (param_3 != 0) {
      iVar3 = 0;
      puVar8 = (undefined2 *)(param_4 + -2);
      uVar5 = 0;
      do {
        puVar8 = puVar8 + 1;
        iVar4 = FUN_2c135620(auStack_225 + uVar5 + 1,0x200 - uVar5,param_1,*puVar8);
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 + iVar4;
        if (param_3 == iVar3) break;
      } while (uVar5 < 0x200);
      goto LAB_2c135cdc;
    }
LAB_2c135d8a:
    param_2 = 1;
    auStack_225[1] = 10;
  }
  else {
    if (param_2 == 4) {
      if (param_3 != 0) {
        iVar3 = 0;
        puVar7 = (undefined4 *)(param_4 + -4);
        uVar5 = 0;
        do {
          puVar7 = puVar7 + 1;
          iVar4 = FUN_2c135620(auStack_225 + uVar5 + 1,0x200 - uVar5,param_1,*puVar7);
          iVar3 = iVar3 + 1;
          uVar5 = uVar5 + iVar4;
          if (iVar3 == param_3) break;
        } while (uVar5 < 0x200);
        goto LAB_2c135cdc;
      }
      goto LAB_2c135d8a;
    }
    if (param_3 == 0) goto LAB_2c135d8a;
    uVar5 = 0;
    puVar6 = (undefined1 *)(param_4 + -1);
    do {
      puVar6 = puVar6 + 1;
      iVar3 = FUN_2c135620(auStack_225 + uVar5 + 1,0x200 - uVar5,param_1,*puVar6);
      uVar5 = uVar5 + iVar3;
      if (puVar6 == (undefined1 *)(param_3 + param_4 + -1)) break;
    } while (uVar5 < 0x200);
LAB_2c135cdc:
    param_2 = uVar5 + 1;
    if (0x200 < param_2) {
      uVar5 = 0x1ff;
    }
    cVar1 = *pcVar2;
    if (0x200 < param_2) {
      param_2 = 0x200;
    }
    auStack_225[uVar5 + 1] = 10;
    if (cVar1 == '\0') goto LAB_2c135d02;
  }
  lVar9 = FUN_2c1351d0(auStack_225 + 1,param_2);
LAB_2c135d04:
  if ((*_DAT_2c135d9c ^ uStack_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c13424c((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),*_DAT_2c135d9c ^ uStack_24,0);
  }
  return;
}

