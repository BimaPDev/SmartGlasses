/* FUN_1008ad00 @ 0x1008ad00 */

void FUN_1008ad00(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  piVar6 = (int *)*param_1;
  iVar7 = *piVar6;
  iVar3 = piVar6[1];
  piVar2 = (int *)FUN_1012b06a(DAT_1008ada4);
  uVar1 = DAT_1008ada4;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)FUN_1012b076(uVar1,piVar2)) {
    if ((((piVar2 != piVar6) && (*piVar2 == *piVar6)) && (piVar2[2] == piVar6[2])) &&
       ((short)piVar2[1] == (short)piVar6[1])) {
      return;
    }
  }
  uVar4 = 0;
  while( true ) {
    if ((*(ushort *)(iVar7 + 0x2a) & 0x3ff) >> 4 <= uVar4) {
      return;
    }
    iVar8 = uVar4 * 8;
    iVar5 = *(int *)(iVar7 + 0xc) + uVar4 * 8;
    if (((int)((uint)*(byte *)(iVar5 + 7) << 0x1e) < 0) &&
       ((*(uint *)(iVar5 + 4) & 0xffffff) == piVar6[2])) break;
    uVar4 = uVar4 + 1;
  }
  FUN_1012b018(DAT_1008ada4,piVar6);
  FUN_10094268(piVar6,DAT_1008ada8);
  iVar5 = *(int *)(iVar7 + 0xc);
  FUN_10094644(*(undefined4 *)(iVar5 + iVar8),(short)iVar3);
  iVar3 = FUN_1012b27a(*(undefined4 *)(*(int *)(iVar7 + 0xc) + iVar8));
  if (iVar3 == 0) {
    return;
  }
  FUN_1008abf0(iVar7,*(undefined4 *)(iVar5 + iVar8),*(uint *)(iVar5 + iVar8 + 4) & 0xffffff);
  return;
}

