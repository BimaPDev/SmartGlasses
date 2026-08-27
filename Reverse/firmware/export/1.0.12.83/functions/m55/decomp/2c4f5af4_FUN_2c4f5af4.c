/* FUN_2c4f5af4 @ 0x2c4f5af4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f5af4(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = _LAB_2c4f5bc4;
  puVar2 = _LAB_2c4f5ba0;
  uVar1 = *(ushort *)(_LAB_2c4f5bc4 + 0x40);
  *_LAB_2c4f5ba0 = (short)param_2;
  puVar2[1] = uVar1;
  iVar4 = uVar1 + 1;
  *(short *)(iVar3 + 0x40) = (short)iVar4;
  if (0x400 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f5bc0,param_4,0x400,iVar4,param_4);
  }
  uVar5 = (uint)(_LAB_2c4f5ba4 - _LAB_2c4f5ba8) >> 5;
  if (uVar5 != 0) {
    iVar4 = 0;
    do {
      if (*(ushort *)(_LAB_2c4f5ba8 + iVar4 * 2) == param_2) {
        FUN_2c674668(_LAB_2c4f5bac,param_3,param_4);
        puVar2 = _LAB_2c4f5ba0;
        *_LAB_2c4f5bb0 = *_LAB_2c4f5bb0 + 1;
        iVar4 = FUN_2c4b7414(0,puVar2,param_4 + 4);
        FUN_2c6471b4(*(undefined4 *)(iVar3 + 4),0xffffffff);
        if (iVar4 == 0) {
          *_LAB_2c4f5bb4 = *_LAB_2c4f5bb4 + 1;
        }
        if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
          (**(code **)(param_1 + 0x1c))(param_2,param_3,param_4);
        }
        return iVar4;
      }
      iVar4 = iVar4 + 0x10;
    } while (uVar5 * 0x10 - iVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f5bbc,_LAB_2c4f5bb8,param_2,_LAB_2c4f5ba8,param_4);
}

