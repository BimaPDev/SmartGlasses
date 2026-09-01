/* FUN_10093ee0 @ 0x10093ee0 */

byte * FUN_10093ee0(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_1012b06a(DAT_10093f08);
  uVar1 = DAT_10093f08;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return (byte *)0x0;
    }
    if (*(byte *)*puVar2 == param_1) break;
    puVar2 = (undefined4 *)FUN_1012b076(uVar1);
  }
  return (byte *)*puVar2;
}

