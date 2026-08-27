/* FUN_2c4f51f4 @ 0x2c4f51f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f51f4(short *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uStack_418;
  short sStack_416;
  undefined1 auStack_414 [1024];
  int iStack_14;
  
  iStack_14 = *_LAB_2c4f5298;
  if (0x400 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f52b8,_LAB_2c4f52b4,param_2,0x400);
  }
  uStack_418 = 1;
  sStack_416 = *_LAB_2c4f529c;
  *_LAB_2c4f529c = sStack_416 + 1;
  FUN_2c674668(auStack_414,param_1,param_2);
  FUN_2c4bd76c(0,&uStack_418,param_2 + 4);
  uVar1 = (uint)(_LAB_2c4f52a0 - _LAB_2c4f52a4) >> 5;
  if (uVar1 != 0) {
    iVar2 = 0;
    do {
      if (*(short *)(_LAB_2c4f52a4 + iVar2 * 2) == *param_1) {
        FUN_2c6441b4(*_LAB_2c4f52a8,0xffffffff);
        if (*_LAB_2c4f5298 == iStack_14) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      iVar2 = iVar2 + 0x10;
    } while (uVar1 * 0x10 - iVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4f52b0,_LAB_2c4f52ac,*param_1);
}

