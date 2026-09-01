/* FUN_1011a5ec @ 0x1011a5ec */

/* WARNING: Removing unreachable block (ram,0x100548c8) */
/* WARNING: Removing unreachable block (ram,0x100548ca) */
/* WARNING: Removing unreachable block (ram,0x100548ce) */
/* WARNING: Removing unreachable block (ram,0x100548c6) */

int FUN_1011a5ec(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  uint uVar6;
  byte *pbVar7;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    for (piVar5 = *(int **)(param_1 + 8); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
      iVar3 = piVar5[8];
      if (iVar3 != 0) {
        if (iVar3 == param_2) {
LAB_100548d8:
          if (piVar5[8] == 0) {
            return 0;
          }
          return (int)piVar5;
        }
        pbVar7 = (byte *)(param_2 + -1);
        pbVar4 = (byte *)(iVar3 + -1);
        while( true ) {
          pbVar7 = pbVar7 + 1;
          uVar1 = (uint)*pbVar7;
          pbVar4 = pbVar4 + 1;
          uVar2 = (uint)*pbVar4;
          uVar6 = uVar1;
          if ((*(byte *)(uVar1 + DAT_100548e8) & 3) == 1) {
            uVar6 = uVar1 + 0x20;
          }
          if ((*(byte *)(DAT_100548e8 + uVar2) & 3) == 1) {
            uVar2 = uVar2 + 0x20;
          }
          if (uVar6 != uVar2) break;
          if (uVar1 == 0) goto LAB_100548d8;
        }
      }
    }
  }
  return 0;
}

