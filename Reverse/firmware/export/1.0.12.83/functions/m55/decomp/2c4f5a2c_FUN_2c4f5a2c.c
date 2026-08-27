/* FUN_2c4f5a2c @ 0x2c4f5a2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f5a2c(short *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 uStack_418;
  short sStack_416;
  undefined1 auStack_414 [1024];
  int iStack_14;
  
  iVar1 = _LAB_2c4f5ad8;
  iStack_14 = *_LAB_2c4f5ad4;
  if (0x400 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f5af0,_LAB_2c4f5aec,param_2,0x400);
  }
  uStack_418 = 1;
  sStack_416 = *(short *)(_LAB_2c4f5ad8 + 0x40);
  *(short *)(_LAB_2c4f5ad8 + 0x40) = sStack_416 + 1;
  FUN_2c674668(auStack_414,param_1,param_2);
  uVar3 = (uint)(_LAB_2c4f5adc - _LAB_2c4f5ae0) >> 5;
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      if (*(short *)(_LAB_2c4f5ae0 + iVar2 * 2) == *param_1) {
        FUN_2c4b7414(0,&uStack_418,param_2 + 4);
        FUN_2c6471b4(*(undefined4 *)(iVar1 + 4),0xffffffff);
        if (*_LAB_2c4f5ad4 == iStack_14) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      iVar2 = iVar2 + 0x10;
    } while (uVar3 * 0x10 != iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f5ae8,_LAB_2c4f5ae4);
}

