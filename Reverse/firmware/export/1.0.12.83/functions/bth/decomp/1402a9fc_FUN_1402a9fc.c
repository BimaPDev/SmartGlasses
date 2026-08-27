/* FUN_1402a9fc @ 0x1402a9fc */

void FUN_1402a9fc(undefined4 param_1,uint param_2,int param_3,int param_4)

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
  uint local_24;
  
  pcVar2 = DAT_1402ab18;
  local_24 = *DAT_1402ab14;
  if (*DAT_1402ab18 == '\0') {
LAB_1402aa7a:
    lVar9 = (ulonglong)param_2 << 0x20;
    goto LAB_1402aa7c;
  }
  if (param_2 == 2) {
    if (param_3 != 0) {
      iVar3 = 0;
      puVar8 = (undefined2 *)(param_4 + -2);
      uVar5 = 0;
      do {
        puVar8 = puVar8 + 1;
        iVar4 = FUN_1402a350(auStack_225 + uVar5 + 1,0x200 - uVar5,param_1,*puVar8);
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 + iVar4;
        if (param_3 == iVar3) break;
      } while (uVar5 < 0x200);
      goto LAB_1402aa54;
    }
LAB_1402ab02:
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
          iVar4 = FUN_1402a350(auStack_225 + uVar5 + 1,0x200 - uVar5,param_1,*puVar7);
          iVar3 = iVar3 + 1;
          uVar5 = uVar5 + iVar4;
          if (iVar3 == param_3) break;
        } while (uVar5 < 0x200);
        goto LAB_1402aa54;
      }
      goto LAB_1402ab02;
    }
    if (param_3 == 0) goto LAB_1402ab02;
    uVar5 = 0;
    puVar6 = (undefined1 *)(param_4 + -1);
    do {
      puVar6 = puVar6 + 1;
      iVar3 = FUN_1402a350(auStack_225 + uVar5 + 1,0x200 - uVar5,param_1,*puVar6);
      uVar5 = uVar5 + iVar3;
      if (puVar6 == (undefined1 *)(param_3 + param_4 + -1)) break;
    } while (uVar5 < 0x200);
LAB_1402aa54:
    param_2 = uVar5 + 1;
    if (0x200 < param_2) {
      uVar5 = 0x1ff;
    }
    cVar1 = *pcVar2;
    if (0x200 < param_2) {
      param_2 = 0x200;
    }
    auStack_225[uVar5 + 1] = 10;
    if (cVar1 == '\0') goto LAB_1402aa7a;
  }
  lVar9 = FUN_14029cb0(auStack_225 + 1,param_2);
LAB_1402aa7c:
  if ((*DAT_1402ab14 ^ local_24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc((int)lVar9,(int)((ulonglong)lVar9 >> 0x20),*DAT_1402ab14 ^ local_24,0);
  }
  return;
}

