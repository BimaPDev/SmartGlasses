/* FUN_14070608 @ 0x14070608 */

ushort FUN_14070608(uint param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar2 = DAT_14070710;
  iVar8 = *(int *)(DAT_14070710 + (param_1 + 6) * 4);
  if (((iVar8 == 0) || (*(byte *)(iVar8 + 0x3c) <= param_2)) ||
     (piVar7 = *(int **)(iVar8 + (param_2 + 0x10) * 4), piVar7 == (int *)0x0)) {
    return 0x43;
  }
  if (param_3 == 0) {
    uVar3 = *(ushort *)((int)piVar7 + 0x12) & 1;
    if ((*(ushort *)((int)piVar7 + 0x12) & 1) != 0) {
      while (piVar7[1] != 0) {
        while( true ) {
          iVar4 = FUN_14073a58(piVar7 + 1);
          if ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x2d) & 8) != 0)) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar4 + ((*(byte *)(iVar4 + 0x2d) & 0xf) + 3) * 4;
          }
          uVar1 = *(undefined2 *)(iVar5 + 4);
          if (*(char *)(iVar4 + 0xb) != '\x01') break;
          (**(code **)(*piVar7 + 4))(param_1,uVar1,param_2,0x30,iVar4);
          FUN_140735a8(iVar4);
          if (piVar7[1] == 0) goto LAB_14070690;
        }
        FUN_140735a8(iVar4);
        (**(code **)(*piVar7 + 4))(param_1,uVar1,param_2,0x30,iVar4);
      }
LAB_14070690:
      uVar6 = *(uint *)(iVar8 + 0x2c) & ~(1 << (param_2 & 0xff));
      *(uint *)(iVar8 + 0x2c) = uVar6;
      if (uVar6 == 0) {
        *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & ~(1 << (param_1 & 0xff));
      }
      FUN_140735a8(piVar7[3]);
      if (*(byte *)(iVar8 + 0x31) == param_2) {
        *(undefined1 *)(iVar8 + 0x31) = 0xff;
      }
      *(ushort *)((int)piVar7 + 0x12) = *(ushort *)((int)piVar7 + 0x12) & 0xfffe;
      return 0;
    }
  }
  else {
    uVar3 = 0;
    *(ushort *)((int)piVar7 + 0x12) = *(ushort *)((int)piVar7 + 0x12) | 1;
  }
  return uVar3;
}

