/* FUN_2c59f36c @ 0x2c59f36c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59f36c(int param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined4 *****pppppuVar4;
  int iVar5;
  undefined4 *****pppppuVar6;
  int iVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  undefined4 *****pppppuVar10;
  int iVar11;
  int iVar12;
  undefined4 ****ppppuStack_48;
  undefined4 ****ppppuStack_44;
  undefined4 ****ppppuStack_40;
  undefined4 ****appppuStack_3c [4];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c59f628;
  ppppuStack_44 = appppuStack_3c;
  if (param_2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c59f63c,0,param_3,0);
  }
  pppppuVar4 = (undefined4 *****)FUN_2c66c4ec(param_2);
  ppppuStack_48 = pppppuVar4;
  if (pppppuVar4 < (undefined4 *****)0x10) {
    pppppuVar9 = appppuStack_3c;
    if (pppppuVar4 == (undefined4 *****)0x1) {
      appppuStack_3c[0] = (undefined4 ****)CONCAT31(appppuStack_3c[0]._1_3_,*param_2);
    }
    else if (pppppuVar4 != (undefined4 *****)0x0) goto LAB_2c59f58c;
  }
  else {
    ppppuStack_44 = (undefined4 ****)FUN_2c65e908(&ppppuStack_44,&ppppuStack_48,0);
    appppuStack_3c[0] = ppppuStack_48;
    pppppuVar9 = (undefined4 *****)ppppuStack_44;
LAB_2c59f58c:
    FUN_2c674668(pppppuVar9,param_2,pppppuVar4);
    pppppuVar9 = (undefined4 *****)ppppuStack_44;
  }
  ppppuVar3 = ppppuStack_44;
  ppppuVar2 = ppppuStack_48;
  iVar11 = param_1 + 0x38;
  *(undefined1 *)((int)pppppuVar9 + (int)ppppuStack_48) = 0;
  iVar5 = *(int *)(param_1 + 0x3c);
  iVar12 = iVar11;
  ppppuStack_40 = ppppuStack_48;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_2c59f458:
    ppppuStack_48 = &ppppuStack_44;
    iVar5 = FUN_2c59f238(param_1 + 0x34,iVar12,&ppppuStack_48);
    cVar1 = *(char *)(iVar5 + 0x28);
    pppppuVar4 = (undefined4 *****)ppppuStack_44;
    pppppuVar9 = (undefined4 *****)ppppuStack_40;
  }
  else {
    do {
      while( true ) {
        iVar7 = iVar5;
        pppppuVar9 = *(undefined4 ******)(iVar7 + 0x14);
        pppppuVar4 = pppppuVar9;
        if (ppppuVar2 <= pppppuVar9) {
          pppppuVar4 = (undefined4 *****)ppppuVar2;
        }
        if ((pppppuVar4 == (undefined4 *****)0x0) ||
           (iVar5 = FUN_2c66960c(*(undefined4 *)(iVar7 + 0x10),ppppuVar3), iVar5 == 0)) {
          iVar5 = (int)pppppuVar9 - (int)ppppuVar2;
        }
        if (iVar5 < 0) break;
        iVar5 = *(int *)(iVar7 + 8);
        iVar12 = iVar7;
        if (*(int *)(iVar7 + 8) == 0) goto LAB_2c59f3ee;
      }
      iVar5 = *(int *)(iVar7 + 0xc);
    } while (*(int *)(iVar7 + 0xc) != 0);
LAB_2c59f3ee:
    if (iVar11 == iVar12) goto LAB_2c59f458;
    pppppuVar9 = *(undefined4 ******)(iVar12 + 0x14);
    pppppuVar4 = pppppuVar9;
    if (ppppuVar2 <= pppppuVar9) {
      pppppuVar4 = (undefined4 *****)ppppuVar2;
    }
    if ((pppppuVar4 == (undefined4 *****)0x0) ||
       (iVar5 = FUN_2c66960c(ppppuVar3,*(undefined4 *)(iVar12 + 0x10)), iVar5 == 0)) {
      iVar5 = (int)ppppuVar2 - (int)pppppuVar9;
    }
    if (iVar5 < 0) goto LAB_2c59f458;
    cVar1 = *(char *)(iVar12 + 0x28);
    pppppuVar4 = (undefined4 *****)ppppuStack_44;
    pppppuVar9 = (undefined4 *****)ppppuStack_40;
  }
  ppppuStack_44 = pppppuVar4;
  ppppuStack_40 = pppppuVar9;
  if (cVar1 != '\0') goto LAB_2c59f41e;
  iVar7 = param_1 + 0x50;
  iVar5 = *(int *)(param_1 + 0x54);
  iVar12 = iVar7;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_2c59f5a6:
    ppppuStack_48 = &ppppuStack_44;
    iVar5 = FUN_2c59ea60(param_1 + 0x4c,iVar12,&ppppuStack_48);
    if (*(int *)(iVar5 + 0x28) < *_DAT_2c59f62c) {
LAB_2c59f4f2:
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c59f634,0x1fe,_LAB_2c59f638,_LAB_2c59f630,param_2);
    }
  }
  else {
    do {
      while( true ) {
        iVar8 = iVar5;
        pppppuVar10 = *(undefined4 ******)(iVar8 + 0x14);
        pppppuVar6 = pppppuVar10;
        if (pppppuVar9 <= pppppuVar10) {
          pppppuVar6 = pppppuVar9;
        }
        if ((pppppuVar6 == (undefined4 *****)0x0) ||
           (iVar5 = FUN_2c66960c(*(undefined4 *)(iVar8 + 0x10),pppppuVar4), iVar5 == 0)) {
          iVar5 = (int)pppppuVar10 - (int)pppppuVar9;
        }
        if (iVar5 < 0) break;
        iVar5 = *(int *)(iVar8 + 8);
        iVar12 = iVar8;
        if (*(int *)(iVar8 + 8) == 0) goto LAB_2c59f4ba;
      }
      iVar5 = *(int *)(iVar8 + 0xc);
    } while (*(int *)(iVar8 + 0xc) != 0);
LAB_2c59f4ba:
    if (iVar12 == iVar7) goto LAB_2c59f5a6;
    pppppuVar10 = *(undefined4 ******)(iVar12 + 0x14);
    pppppuVar6 = pppppuVar10;
    if (pppppuVar9 <= pppppuVar10) {
      pppppuVar6 = pppppuVar9;
    }
    if ((pppppuVar6 == (undefined4 *****)0x0) ||
       (iVar5 = FUN_2c66960c(pppppuVar4,*(undefined4 *)(iVar12 + 0x10)), iVar5 == 0)) {
      iVar5 = (int)pppppuVar9 - (int)pppppuVar10;
    }
    if (iVar5 < 0) goto LAB_2c59f5a6;
    if (*(int *)(iVar12 + 0x28) < *_DAT_2c59f62c) goto LAB_2c59f4f2;
  }
  iVar5 = *(int *)(param_1 + 0x40);
  while (iVar11 != iVar5) {
    *(undefined1 *)(iVar5 + 0x28) = 0;
    iVar5 = thunk_FUN_2c64e43a();
  }
  iVar5 = *(int *)(param_1 + 0x58);
  while (iVar7 != iVar5) {
    *(undefined4 *)(iVar5 + 0x28) = 0;
    iVar5 = thunk_FUN_2c64e43a();
  }
  if ((*(char *)(param_1 + 0x94) == '\0') && (*(char *)(param_1 + 0x95) == '\0')) {
    func_0x2c59de34(param_1,0xd);
  }
LAB_2c59f41e:
  if ((undefined4 *****)ppppuStack_44 != appppuStack_3c) {
    thunk_FUN_2c669588(ppppuStack_44,(int)appppuStack_3c[0] + 1);
  }
  if (*_LAB_2c59f628 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

