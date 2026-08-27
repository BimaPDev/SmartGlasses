/* FUN_14066390 @ 0x14066390 */

uint FUN_14066390(int param_1,int param_2,int param_3,undefined1 *param_4,short *param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  uVar1 = *(ushort *)(param_3 + 2);
  if (uVar1 == 0x2803) {
    if ((int)((uint)*(byte *)(param_2 + 6) + (uint)*(ushort *)(param_2 + 4) + -1) <= param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_140664ec,0x2c6,DAT_140664e8,param_4);
    }
    iVar3 = param_2 + ((param_1 + 1U) - (uint)*(ushort *)(param_2 + 4)) * 6;
    uVar2 = *(undefined2 *)(iVar3 + 0xc);
    uVar4 = param_1 + 1U & 0xffff;
    param_4[1] = (char)uVar4;
    *param_4 = (char)uVar2;
    param_4[2] = (char)(uVar4 >> 8);
    *param_5 = 3;
    uVar1 = *(ushort *)(iVar3 + 0xe);
    uVar4 = (uint)(*(ushort *)(iVar3 + 0xc) >> 0xe);
    if (uVar4 == 0) {
      param_4[3] = (char)uVar1;
      param_4[4] = (char)(uVar1 >> 8);
      *param_5 = *param_5 + 2;
      return 0;
    }
    param_4 = param_4 + 3;
    param_2 = param_2 + (uint)uVar1;
LAB_1406646e:
    FUN_14065d68(param_2,uVar4,param_4);
    *param_5 = *param_5 + 0x10;
    return 0;
  }
  if (uVar1 < 0x2804) {
    if (uVar1 == 0x2802) {
      piVar5 = *(int **)(DAT_140664e4 + 0x84);
      while( true ) {
        if ((piVar5 == (int *)0x0) ||
           ((uint)*(ushort *)(param_3 + 4) < (uint)*(ushort *)(piVar5 + 1))) {
          *param_5 = 4;
          *param_4 = 0;
          param_4[1] = 0;
          param_4[2] = 0;
          param_4[3] = 0;
          *(undefined4 *)(param_4 + 4) = 0;
          *(undefined4 *)(param_4 + 8) = 0;
          *(undefined4 *)(param_4 + 0xc) = 0;
          *(undefined4 *)(param_4 + 0x10) = 0;
          *param_5 = *param_5 + 0x10;
          return 0;
        }
        if ((uint)*(ushort *)(param_3 + 4) <
            (uint)*(byte *)((int)piVar5 + 6) + (uint)*(ushort *)(piVar5 + 1)) break;
        piVar5 = (int *)*piVar5;
      }
      *param_5 = 4;
      uVar2 = *(undefined2 *)(piVar5 + 1);
      *param_4 = (char)uVar2;
      param_4[1] = (char)((ushort)uVar2 >> 8);
      uVar4 = (uint)*(byte *)((int)piVar5 + 6) + (*(ushort *)(piVar5 + 1) - 1) & 0xffff;
      param_4[2] = (char)uVar4;
      param_4[3] = (char)(uVar4 >> 8);
      uVar4 = (*(byte *)((int)piVar5 + 10) & 0x7f) >> 5;
      if ((*(byte *)((int)piVar5 + 10) & 0x60) == 0) {
        uVar2 = *(undefined2 *)(piVar5 + 2);
        param_4[4] = (char)uVar2;
        param_4[5] = (char)((ushort)uVar2 >> 8);
        *param_5 = *param_5 + 2;
        return uVar4;
      }
      param_4 = param_4 + 4;
      param_2 = (uint)*(ushort *)(piVar5 + 2) + (int)piVar5;
      goto LAB_1406646e;
    }
    if (0x27ff < uVar1) {
      uVar4 = (*(byte *)(param_2 + 10) & 0x7f) >> 5;
      if ((*(byte *)(param_2 + 10) & 0x60) == 0) {
        uVar2 = *(undefined2 *)(param_2 + 8);
        *param_4 = (char)uVar2;
        param_4[1] = (char)((ushort)uVar2 >> 8);
        *param_5 = 2;
        return uVar4;
      }
      FUN_14065d68((uint)*(ushort *)(param_2 + 8) + param_2,uVar4,param_4);
      *param_5 = 0x10;
      return 0;
    }
  }
  else if (uVar1 == 0x2900) {
    uVar2 = *(undefined2 *)(param_3 + 4);
    param_4[1] = (char)((ushort)uVar2 >> 8);
    *param_4 = (char)uVar2;
    *param_5 = 2;
    return 0;
  }
  return 1;
}

