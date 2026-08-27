/* FUN_2c4f629c @ 0x2c4f629c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f629c(short *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 uStack_418;
  short sStack_416;
  undefined1 auStack_414 [1024];
  int iStack_14;
  
  iVar1 = _LAB_2c4f635c;
  iStack_14 = *_LAB_2c4f6358;
  if (0x400 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4f6380,_LAB_2c4f637c,param_2,0x400);
  }
  uStack_418 = 1;
  sStack_416 = *(short *)(_LAB_2c4f635c + 0x40);
  *(short *)(_LAB_2c4f635c + 0x40) = sStack_416 + 1;
  FUN_2c674668(auStack_414,param_1,param_2);
  uVar3 = (uint)(_LAB_2c4f6360 - _LAB_2c4f6364) >> 5;
  if (uVar3 != 0) {
    iVar2 = 0;
    do {
      if (*(short *)(_LAB_2c4f6364 + iVar2 * 2) == *param_1) {
        iVar2 = FUN_2c4baa00(0,&uStack_418,param_2 + 4);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x12f,_LAB_2c4f6370,_LAB_2c4f636c,_LAB_2c4f6368);
        }
        FUN_2c6471b4(*(undefined4 *)(iVar1 + 4),0xffffffff);
        if (*_LAB_2c4f6358 == iStack_14) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      iVar2 = iVar2 + 0x10;
    } while (uVar3 * 0x10 != iVar2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(uRam2c4f6378,_LAB_2c4f6374);
}

