/* FUN_2c4c147c @ 0x2c4c147c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4c147c(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uStack_2c;
  uint uStack_28;
  undefined4 uStack_24;
  
  uVar6 = _LAB_2c4c15d8;
  puVar5 = _LAB_2c4c15d4;
  piVar4 = _LAB_2c4c15c4;
  piVar3 = _LAB_2c4c15c0;
  piVar2 = _LAB_2c4c15b8;
  uStack_24 = *_LAB_2c4c15bc;
  uStack_2c = *_LAB_2c4c15b4;
  uStack_28 = _LAB_2c4c15b4[1];
  if (*_LAB_2c4c15b8 != 0) {
    if (*_LAB_2c4c15c4 == 1) {
      uVar1 = uStack_2c >> 8;
      uStack_2c = CONCAT31((int3)uVar1,0x16);
      uVar1 = uStack_28 >> 8;
      uStack_28 = CONCAT31((int3)uVar1,0x17);
    }
    FUN_2c673bc8(&uStack_2c,2,0);
    FUN_2c4c0248(uStack_2c & 0xff,1);
    FUN_2c4c0248(uStack_28 & 0xff,1);
    if (*piVar3 == 0) {
      *piVar3 = 1;
      FUN_2c4c0158(uStack_2c & 0xff);
      FUN_2c4c0158(uStack_28 & 0xff);
    }
    else {
      *piVar2 = *piVar2 + 1;
      *piVar3 = 0;
      FUN_2c4c01d0(uStack_2c & 0xff);
      FUN_2c4c01d0(uStack_28 & 0xff);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,99,_LAB_2c4c15c8,_LAB_2c4c15cc,uVar6,*piVar4,*piVar3,*piVar2,*puVar5);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4a,_LAB_2c4c15c8,_LAB_2c4c15cc,_LAB_2c4c15d8,*_LAB_2c4c15c4,*_LAB_2c4c15c0,0,
        *_LAB_2c4c15d4);
}

