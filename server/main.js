const express = require('express')
const app = express()
const port = 3000

app.use(express.json())

app.post('/counter', (req, res) => {
  console.log(req.body);
  res.status(200)
})

app.listen(port, () => {
  console.log(`Server app listening on port ${port}`)
})
