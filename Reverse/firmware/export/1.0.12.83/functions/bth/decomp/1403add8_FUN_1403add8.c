/* FUN_1403add8 @ 0x1403add8 */

void FUN_1403add8(undefined1 *param_1,int param_2)

{
  undefined2 uVar1;
  char cVar2;
  
  FUN_1402a6e8(4,0x363,DAT_1403ae5c,DAT_1403ae58,DAT_1403ae54,DAT_1403ae50,
               *(undefined1 *)(param_2 + 6));
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = FUN_1403ce78(param_1);
    cVar2 = *(char *)(param_2 + 6);
    if (cVar2 != '\0') {
      if (cVar2 == '\"') {
        cVar2 = '\x05';
      }
      thunk_FUN_14096c50(uVar1,cVar2,1);
    }
    FUN_1402a6e8(4,0x373,DAT_1403ae5c,DAT_1403ae58,DAT_1403ae60,*param_1,param_1[1],param_1[2],
                 param_1[3],param_1[4],param_1[5]);
  }
  FUN_140afda4(*(undefined1 *)(param_2 + 6),param_1);
  return;
}

