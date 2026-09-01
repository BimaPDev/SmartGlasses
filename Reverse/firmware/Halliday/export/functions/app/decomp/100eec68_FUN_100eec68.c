/* FUN_100eec68 @ 0x100eec68 */

void FUN_100eec68(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*DAT_100eec88 + 2);
  for (; param_1 < 0; param_1 = (int)(char)((char)param_1 + cVar1)) {
  }
  for (; (int)(uint)*(byte *)(*DAT_100eec88 + 2) <= param_1;
      param_1 = (int)(char)((char)param_1 - cVar1)) {
  }
  return;
}

