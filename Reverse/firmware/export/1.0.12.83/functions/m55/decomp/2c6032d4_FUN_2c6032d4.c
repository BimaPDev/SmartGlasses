/* FUN_2c6032d4 @ 0x2c6032d4 */

void FUN_2c6032d4(int param_1,uint param_2,uint param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  piVar3 = (int *)FUN_2c62ca18(DAT_2c603398);
  uVar2 = DAT_2c603398;
  do {
    do {
      piVar1 = piVar3;
      if ((piVar1 == (int *)0x0) || (piVar1 == param_4)) {
        return;
      }
      piVar3 = (int *)FUN_2c62ca28(uVar2,piVar1);
    } while (((*piVar1 != param_1) || ((piVar1[2] != param_2 && (param_2 != 0xf0000)))) ||
            ((*(ushort *)(piVar1 + 1) != param_3 && (param_3 != 0xffff))));
    uVar6 = (uint)*(ushort *)(param_1 + 0x22);
    if ((*(ushort *)(param_1 + 0x22) & 0x1f8) != 0) {
      uVar5 = 0;
      do {
        while( true ) {
          iVar7 = uVar5 * 8;
          iVar4 = *(int *)(param_1 + 0xc) + uVar5 * 8;
          uVar5 = uVar5 + 1;
          if ((-1 < (int)((uint)*(byte *)(iVar4 + 7) << 0x1e)) ||
             ((param_2 != 0xf0000 && (param_2 != (*(uint *)(iVar4 + 4) & 0xffffff))))) break;
          FUN_2c62af34(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar7),(short)piVar1[1]);
          uVar6 = (uint)*(ushort *)(param_1 + 0x22);
          if ((uVar6 & 0x1ff) >> 3 <= uVar5) goto LAB_2c60337e;
        }
      } while (uVar5 < (uVar6 & 0x1ff) >> 3);
    }
LAB_2c60337e:
    FUN_2c62e838(piVar1,0);
    FUN_2c62c998(uVar2,piVar1);
    FUN_2c62bea8(piVar1);
  } while( true );
}

