/* FUN_100cf028 @ 0x100cf028 */

int FUN_100cf028(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_48 [4];
  undefined4 local_44;
  undefined1 local_40;
  undefined1 auStack_3c [36];
  
  puVar8 = &local_44;
  local_40 = (undefined1)param_1;
  local_44 = param_2;
  FUN_10134be0(1,0xffff,DAT_100cf120,puVar8);
  if (param_1 == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    puVar7 = auStack_48;
    FUN_10119c46(puVar7,4,param_1);
  }
  FUN_100c2210(auStack_3c,0x24,DAT_100cf124,param_2,puVar7);
  iVar1 = FUN_10132898(auStack_3c);
  if ((-1 < iVar1) && (iVar1 = FUN_100ccb58(param_1,param_2), -1 < iVar1)) {
    iVar1 = FUN_100cc858(param_1,param_2);
    if (iVar1 != 0) {
      FUN_10134980();
    }
    if (param_1 == 0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      FUN_10119c46(puVar8,4,param_1);
    }
    FUN_100c2210(auStack_3c,0x24,DAT_100cf128,param_2,puVar8);
    iVar1 = FUN_10132898(auStack_3c);
    if (-1 < iVar1) {
      iVar6 = 0;
      iVar1 = DAT_100cf12c;
      do {
        if (*(byte *)(iVar1 + -1) == param_1) {
          iVar2 = FUN_10134500(param_2,iVar1);
          if (iVar2 == 0) {
            iVar1 = DAT_100cf130 + iVar6 * 0x10;
            piVar3 = *(int **)(iVar1 + 8);
            if ((piVar3 != (int *)0x0) && (piVar4 = piVar3 + -5, piVar4 != (int *)0x0)) {
              piVar3 = (int *)*piVar3;
              if (piVar3 != (int *)0x0) {
                piVar3 = piVar3 + -5;
              }
              while( true ) {
                piVar5 = piVar3;
                *(undefined2 *)(piVar4 + 3) = 0;
                FUN_101347ba(0,iVar1);
                if (piVar5 == (int *)0x0) break;
                piVar4 = piVar5;
                piVar3 = (int *)0x0;
                if ((piVar5 != (int *)0xffffffec) &&
                   (piVar3 = (int *)piVar5[5], piVar3 != (int *)0x0)) {
                  piVar3 = piVar3 + -5;
                }
              }
            }
            break;
          }
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + 0x10;
      } while (iVar6 != 9);
      iVar1 = 0;
    }
  }
  return iVar1;
}

