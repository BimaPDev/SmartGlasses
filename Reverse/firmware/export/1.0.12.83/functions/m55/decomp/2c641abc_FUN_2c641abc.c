/* FUN_2c641abc @ 0x2c641abc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c641abc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  int iStack_20;
  int iStack_1c;
  int iStack_14;
  
  iStack_14 = *_LAB_2c641c38;
  uVar5 = FUN_2c5e31b4(3,&iStack_20,param_3,0);
  puVar1 = _LAB_2c641c3c;
  uVar3 = iStack_1c + -1 + (uint)(iStack_20 != 0);
  bVar4 = 0xe < iStack_20 - 1U;
  if (uVar3 == 0 && bVar4 <= uVar3) {
    switch(iStack_20) {
    case 1:
      goto LAB_2c641b0e;
    case 2:
      goto LAB_2c641b38;
    case 3:
      uVar2 = _LAB_2c641c54;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c50;
      }
      FUN_2c638730(*_LAB_2c641c3c,uVar2);
      break;
    case 4:
      uVar2 = _LAB_2c641c5c;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c58;
      }
      FUN_2c638730(*_LAB_2c641c3c,uVar2);
      break;
    default:
      goto LAB_2c641afe;
    case 8:
      FUN_2c6072bc(*_LAB_2c641c3c,2,0,0xfa);
      FUN_2c607048(*puVar1,0x78,0x27d1);
      uVar2 = _LAB_2c641c64;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c60;
      }
      FUN_2c638730(*puVar1,uVar2);
      break;
    case 10:
      uVar2 = _LAB_2c641c6c;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c68;
      }
      FUN_2c638730(*_LAB_2c641c3c,uVar2);
      break;
    case 0xb:
      uVar2 = _LAB_2c641c74;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c70;
      }
      FUN_2c638730(*_LAB_2c641c3c,uVar2);
      break;
    case 0xd:
      FUN_2c6072bc(*_LAB_2c641c3c,2,0,0xfa);
      FUN_2c607048(*puVar1,0x78,0x27d1);
      uVar2 = _LAB_2c641c7c;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c78;
      }
      FUN_2c638730(*puVar1,uVar2);
      break;
    case 0xe:
      uVar2 = _LAB_2c641c84;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c80;
      }
      FUN_2c638730(*_LAB_2c641c3c,uVar2);
      break;
    case 0xf:
      FUN_2c6072bc(*_LAB_2c641c3c,2,0,0xfa);
      FUN_2c607048(*puVar1,0x78,0x27d1);
      uVar2 = _LAB_2c641c8c;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c88;
      }
      FUN_2c638730(*puVar1,uVar2);
    }
  }
  else {
LAB_2c641afe:
    iStack_20 = FUN_2c5e33e4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3 - !bVar4);
    iStack_1c = 0;
    if (iStack_20 == 2) {
LAB_2c641b38:
      uVar2 = _LAB_2c641c4c;
      if (param_1 != 100) {
        uVar2 = _LAB_2c641c48;
      }
      FUN_2c638730(*_LAB_2c641c3c,uVar2);
      goto LAB_2c641b1e;
    }
LAB_2c641b0e:
    uVar2 = _LAB_2c641c40;
    if (param_1 != 100) {
      uVar2 = _LAB_2c641c44;
    }
    FUN_2c638730(*_LAB_2c641c3c,uVar2);
  }
LAB_2c641b1e:
  if (*_LAB_2c641c38 == iStack_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

