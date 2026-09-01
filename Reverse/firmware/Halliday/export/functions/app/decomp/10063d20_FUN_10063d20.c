/* FUN_10063d20 @ 0x10063d20 */

int FUN_10063d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar1 = DAT_10063dfc;
  FUN_1011dbf4(DAT_10063e00,0xffffffff,param_3,param_4,param_1,param_3,param_3);
  puVar2 = *(undefined4 **)(iVar1 + 8);
  if (puVar2 == (undefined4 *)0x0) {
LAB_10063d3c:
    iVar3 = FUN_10063b7c(param_1,param_2,param_3,1);
    if (iVar3 == 0) {
      iVar4 = 0;
      iVar6 = DAT_10063dfc;
      do {
        if (*(char *)(iVar6 + 0x618) == '\0') {
          iVar4 = iVar4 * 0x24;
          iVar8 = iVar1 + iVar4;
          *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + -1;
          *(undefined2 *)(iVar8 + 0x618) = 1;
          FUN_1011ea40(iVar4 + 0x624 + iVar1,param_2,param_3);
          iVar6 = iVar1 + iVar4 + 0x614;
          *(undefined4 *)(iVar8 + 0x620) = param_1;
          uVar5 = FUN_10115464();
          *(undefined4 *)(iVar8 + 0x61c) = uVar5;
          *(undefined1 *)(iVar8 + 0x619) = 1;
          *(undefined4 *)(iVar1 + iVar4 + 0x614) = 0;
          if (*(int **)(iVar1 + 0xc) == (int *)0x0) {
            *(int *)(iVar1 + 8) = iVar6;
            *(int *)(iVar1 + 0xc) = iVar6;
          }
          else {
            **(int **)(iVar1 + 0xc) = iVar6;
            *(int *)(iVar1 + 0xc) = iVar6;
          }
          goto LAB_10063db6;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x24;
      } while (iVar4 != 5);
      FUN_100a5b78((DAT_10063e08 - DAT_10063e04) * 0x20 & 0xff00U | 0xf60021,DAT_10063e10,
                   DAT_10063e0c);
    }
  }
  else {
    puVar7 = (undefined4 *)*puVar2;
    while( true ) {
      iVar4 = FUN_1011ea30(puVar2 + 4,param_2);
      iVar3 = 0;
      if (iVar4 == 0) break;
      if (puVar7 == (undefined4 *)0x0) goto LAB_10063d3c;
      puVar2 = puVar7;
      puVar7 = (undefined4 *)*puVar7;
    }
  }
LAB_10063db6:
  FUN_10063b70();
  return iVar3;
}

