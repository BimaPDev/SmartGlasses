/* FUN_14040140 @ 0x14040140 */

undefined1 FUN_14040140(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined2 param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  param_2 = param_2 & 0xff;
  uVar1 = 0;
  if (param_2 != 0) {
    iVar3 = param_1 + param_2 * 8;
    while( true ) {
      iVar4 = iVar3 + -8;
      if ((*(ushort *)(iVar3 + -8) == param_3) || (*(ushort *)(iVar3 + -8) == 0xffff)) break;
      iVar3 = iVar4;
      if (iVar4 == param_1 + -8 + param_2 * 8 + (param_2 - 1 & 0xff) * -8) {
        return 0;
      }
    }
    pcVar2 = *(code **)(iVar3 + -4);
    if (pcVar2 == (code *)0x0) {
      FUN_1402a6e8(4,0xd0,DAT_140401bc,DAT_140401c4,DAT_140401c0,0xd0,DAT_140401b8);
    }
    uVar1 = (*pcVar2)(param_3,param_4,0,param_5);
  }
  return uVar1;
}

