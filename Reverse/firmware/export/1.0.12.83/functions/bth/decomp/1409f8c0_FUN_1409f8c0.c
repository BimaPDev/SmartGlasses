/* FUN_1409f8c0 @ 0x1409f8c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1409f8c0(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  piVar7 = (int *)*DAT_1409f99c;
  uVar2 = _MasterStackPointer;
  if (piVar7 != (int *)0x0) {
    iVar9 = *piVar7;
    uVar2 = 0;
    if (iVar9 != 0) {
      iVar5 = 0;
      iVar6 = (int)piVar7 + 0x1a;
      do {
        iVar1 = FUN_140db784(iVar6,param_1,6);
        iVar6 = iVar6 + 0x72;
        iVar10 = iVar5 * 0x72;
        iVar5 = iVar5 + 1;
        if (iVar1 == 0) {
          if ((param_3 == 0) || (*(ushort *)((int)piVar7 + iVar10 + 0x27) == param_3)) {
            iVar10 = iVar10 + 0x31;
LAB_1409f922:
            puVar8 = (undefined4 *)((int)piVar7 + iVar10);
            FUN_1402a6e8(4,0x1ae,DAT_1409f9a8,DAT_1409f9ac,DAT_1409f9a4,DAT_1409f9a0);
            FUN_1402a9fc(DAT_1409f9b0,1,0x10,puVar8);
            uVar2 = puVar8[1];
            uVar3 = puVar8[2];
            uVar4 = puVar8[3];
            *param_2 = *puVar8;
            param_2[1] = uVar2;
            param_2[2] = uVar3;
            param_2[3] = uVar4;
            return 1;
          }
          if (*(ushort *)((int)piVar7 + iVar10 + 0x41) == param_3) {
            iVar10 = iVar10 + 0x4b;
            goto LAB_1409f922;
          }
        }
        if (iVar9 == iVar5) {
          return 0;
        }
      } while( true );
    }
  }
  FUN_1402a6e8(4,0x19c,DAT_1409f9a8,DAT_1409f9ac,DAT_1409f9b4,DAT_1409f9a0,piVar7,uVar2);
  return 0;
}

