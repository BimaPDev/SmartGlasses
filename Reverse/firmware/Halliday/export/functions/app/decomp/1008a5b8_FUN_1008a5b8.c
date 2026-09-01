/* FUN_1008a5b8 @ 0x1008a5b8 */

undefined4 FUN_1008a5b8(int param_1,uint param_2,uint param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = param_1;
  uVar9 = param_3;
  piVar3 = (int *)FUN_1012b070(DAT_1008a670);
  uVar2 = DAT_1008a674;
  uVar1 = DAT_1008a670;
  uVar5 = 0;
  while ((piVar7 = piVar3, piVar7 != (int *)0x0 && (piVar7 != param_4))) {
    piVar3 = (int *)FUN_1012b07e(uVar1,piVar7);
    if (((*piVar7 == param_1) && ((piVar7[2] == param_2 || (param_2 == 0xf0000)))) &&
       ((*(ushort *)(piVar7 + 1) == param_3 || (param_3 == 0xffff)))) {
      for (uVar6 = 0; uVar6 < (*(ushort *)(param_1 + 0x2a) & 0x3ff) >> 4; uVar6 = uVar6 + 1) {
        uVar4 = *(int *)(param_1 + 0xc) + uVar6 * 8;
        if (((int)((uint)*(byte *)(uVar4 + 7) << 0x1e) < 0) &&
           ((param_2 == 0xf0000 || (uVar4 = *(uint *)(uVar4 + 4) & 0xffffff, uVar4 == param_2)))) {
          FUN_10094644(*(undefined4 *)(*(int *)(param_1 + 0xc) + uVar6 * 8),(short)piVar7[1],uVar4,
                       uVar6,iVar8,uVar6,uVar9);
        }
      }
      FUN_100932b0(piVar7,0);
      FUN_1012b018(uVar1,piVar7);
      FUN_10094268(piVar7,uVar2);
      uVar5 = 1;
    }
  }
  return uVar5;
}

