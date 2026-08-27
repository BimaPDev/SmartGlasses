/* FUN_2c5f7848 @ 0x2c5f7848 */

undefined4 FUN_2c5f7848(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar4 = DAT_2c5f79a0;
  uVar3 = DAT_2c5f799c;
  uVar2 = DAT_2c5f7998;
  iVar10 = *(int *)(param_1 + 0x14);
  iVar7 = *(int *)(param_1 + 8);
  if (iVar10 < iVar7) {
    cVar1 = *(char *)(*(int *)(param_1 + 4) + iVar10);
    if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,DAT_2c5f7994,0xe7,DAT_2c5f79a0,DAT_2c5f799c,DAT_2c5f7998);
    }
    if (cVar1 == '[') {
      iVar8 = iVar10 + 1;
      iVar9 = 0;
      *(int *)(param_1 + 0x14) = iVar8;
      while (iVar8 < iVar7) {
        iVar5 = *(int *)(param_1 + 4);
        cVar1 = *(char *)(iVar5 + iVar8);
        if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(3,DAT_2c5f7994,0xe7,uVar4,uVar3,uVar2);
        }
        if (cVar1 == '[') break;
        if (cVar1 == ']') {
          iVar8 = iVar8 - (iVar10 + 1);
          pcVar6 = (char *)(iVar5 + iVar10 + 1);
          *param_2 = (int)pcVar6;
          param_2[1] = iVar8;
          goto joined_r0x2c5f794a;
        }
        iVar8 = iVar8 + 1;
        if (cVar1 == '\\') {
          *(int *)(param_1 + 0x14) = iVar8;
          if (iVar8 < iVar7) {
            if (*(char *)(iVar5 + iVar8) == '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_2c62c82c(3,DAT_2c5f7994,0xe7,uVar4,uVar3,uVar2);
            }
            iVar7 = (int)*(char *)(iVar5 + iVar8);
          }
          else {
            iVar7 = 0;
          }
          iVar7 = FUN_2c5fb9b0(iVar7);
          if (iVar7 == 0) {
            iVar9 = iVar9 + 1;
          }
          else {
            iVar9 = iVar9 + 2;
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          }
        }
        else {
          iVar9 = iVar9 + 1;
          *(int *)(param_1 + 0x14) = iVar8;
        }
        if (1000 < iVar9) break;
        iVar7 = *(int *)(param_1 + 8);
        iVar8 = *(int *)(param_1 + 0x14);
      }
      *(int *)(param_1 + 0x14) = iVar10;
      return 0;
    }
  }
  return 0;
joined_r0x2c5f794a:
  if (iVar8 == 0) goto LAB_2c5f798a;
  iVar7 = FUN_2c5fb998((int)*pcVar6);
  if (iVar7 == 0) {
    iVar7 = param_2[1];
    if (0 < iVar7) goto LAB_2c5f797a;
    goto LAB_2c5f798a;
  }
  pcVar6 = (char *)(*param_2 + 1);
  iVar8 = param_2[1] + -1;
  *param_2 = (int)pcVar6;
  param_2[1] = iVar8;
  goto joined_r0x2c5f794a;
  while( true ) {
    iVar7 = param_2[1] + -1;
    param_2[1] = iVar7;
    if (iVar7 < 1) break;
LAB_2c5f797a:
    iVar7 = FUN_2c5fb998((int)*(char *)(iVar7 + *param_2 + -1));
    if (iVar7 == 0) break;
  }
LAB_2c5f798a:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return 1;
}

