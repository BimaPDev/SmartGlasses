/* FUN_2c4baa2c @ 0x2c4baa2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4baa2c(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ushort local_16;
  undefined4 local_14;
  
  local_14 = *_LAB_2c4baae0;
  local_16 = 0;
  FUN_2c674478();
  FUN_2c4bdfe4(2,0xffffffff,0);
  FUN_2c673e08(0x1e0);
  FUN_2c4bdfa4(2,&local_16);
  FUN_2c4be268(2);
  FUN_2c674708();
  iVar2 = _LAB_2c4baae8;
  uVar4 = (uint)local_16;
  iVar1 = 0;
  piVar3 = _LAB_2c4baae4;
  while (((int)uVar4 < piVar3[-1] || (*piVar3 < (int)uVar4))) {
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 6;
    if (iVar1 == 7) {
      *_LAB_2c4baaec = _LAB_2c4baae8;
LAB_2c4baa94:
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x68,_LAB_2c4baaf4,_LAB_2c4baaf8,_LAB_2c4baaf0,uVar4,*(undefined1 *)(iVar2 + 0xc),
            iVar2 + 0xe);
    }
  }
  iVar2 = _LAB_2c4baae8 + iVar1 * 0x18;
  *_LAB_2c4baaec = iVar2;
  goto LAB_2c4baa94;
}

